#include "HumanCharacter.h"
#include "HumanAnimInstance.h"
#include "HumanWeapon.h"
#include "HumanWeaponBullet.h"
#include "Human_PaustSoulCase.h"
#include "HUD_Human.h"

// 생성자에서 User 초기화
AHumanCharacter::AHumanCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// Add Tag
	Tags.AddUnique(TEXT("Human_Character"));
	
	// Camera Create
	UserCameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CAMERA_ARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	
	// Camera Initialize
	UserCameraArm->SetupAttachment(GetMesh());
	Camera->SetupAttachment(UserCameraArm);
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	UserCameraArm->TargetArmLength = 300.0f;
	UserCameraArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 310.0f), FRotator(-30.0f, 0.0f, 0.0f));

	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonTwinblast/Characters/Heroes/TwinBlast/Meshes/TwinBlast.TwinBlast"));
	if (SK_SOUL_USER.Succeeded()) GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);
	
	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_HUMANCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_HumanChar.BP_HumanChar_C"));
	if (BP_ANIM_HUMANCHAR.Succeeded()) GetMesh()->SetAnimInstanceClass(BP_ANIM_HUMANCHAR.Class);
	
	// Bullet BP Initialize
	static ConstructorHelpers::FObjectFinder<UBlueprint> BP_SOUL_WEAPON_BULLET(TEXT("/Game/Project_Soul/BluePrint/BP_HumanWeaponBullet.BP_HumanWeaponBullet"));
	if (BP_SOUL_WEAPON_BULLET.Succeeded()) WeaponBulletClass = BP_SOUL_WEAPON_BULLET.Object->GeneratedClass;

	// Value Initialize
	GetMesh()->BodyInstance.SetCollisionProfileName(TEXT("HumanChar"));
	GetMesh()->CanCharacterStepUp(false);
	GetCapsuleComponent()->BodyInstance.SetCollisionProfileName(TEXT("HumanChar"));
	GetCapsuleComponent()->CanCharacterStepUp(false);
	SetControlMode(EControlMode::TPS);

	ArmLengthSpeed = 0.0f;
	ArmRotationSpeed = 0.0f;

	// Bullet Initialize
	isFiring = false;
	MuzzleOffset = FVector(50.0f, 5.0f, 75.0f);

	// 스테이터스
	GiveSoulState = false;
	ammo = 30;

	//모션 변수
	Is_Zoom = false;
	Is_Walking = false; 
	
	// Install Value Init
	PerCollect = 0.0f;
	isTrigger = false;
	ColletEnd = false;

	//인간 속도
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
	//점프
	GetCharacterMovement()->JumpZVelocity = 400.0f;

	//인간 체력
	Initial_HP = 100.0f;
	CurrentHp = Initial_HP;
	//인간 SP
	Initial_SP = 0.0f;
	CurrentSP = Initial_SP;

	DeathTime = 600.0f;
	RespawnTime = 0.0f;

	//캐릭터 넘버
	Number = 0;

	//총을 맞춘것을 알리는 bool값
	Hit = false;

	//vec.X = 5500;
	//vec.Y = 3000;
	//vec.Z = 300;
	//GetTransform().TransformFVector4(vec);
	//GetActorTransform().SetTranslation(vec);
	//SetActorLocation(vec);
}

void AHumanCharacter::BeginPlay()
{
	Super::BeginPlay();

	// HUD Setting
	HUD_Human = Cast<AHUD_Human>(GetWorld()->GetFirstPlayerController()->GetHUD());
}

void AHumanCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// 카메라 관련
	UserCameraArm->TargetArmLength = FMath::FInterpTo(UserCameraArm->TargetArmLength, ArmLengthTo, DeltaTime, ArmLengthSpeed);

	// HP 및 SP 관련
	UpdateCurrentHP();
	UpdateCurrentSP();
	if (CurrentHp <= 0)
		Death();
	FTransform tr = GetTransform();

	if (tr.GetTranslation().Z <= -110)
		CurrentHp -= 3;
}
void AHumanCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	HumanAnim = Cast<UHumanAnimInstance>(GetMesh()->GetAnimInstance());
}

void AHumanCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

// Input Key
void AHumanCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 공격 및 점프
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AHumanCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &AHumanCharacter::Zoom);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &AHumanCharacter::StartFire);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Released, this, &AHumanCharacter::StopFire);

	// 상호작용
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Pressed, this, &AHumanCharacter::StartCollect);
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Repeat, this, &AHumanCharacter::Collecting);
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Released, this, &AHumanCharacter::EndCollect);

	//모션
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Pressed, this, &AHumanCharacter::Walk);
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Released, this, &AHumanCharacter::Stop_Walk);

	PlayerInputComponent->BindAction(TEXT("Reload"), EInputEvent::IE_Pressed, this, &AHumanCharacter::ReloadFunc);
	PlayerInputComponent->BindAction(TEXT("Reload"), EInputEvent::IE_Released, this, &AHumanCharacter::Stop_ReloadFunc);
	
	// 이동 및 회전
	PlayerInputComponent->BindAxis(TEXT("ForwardBack"), this, &AHumanCharacter::ForwardBack);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AHumanCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AHumanCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AHumanCharacter::LookUp);
}

// Set Camera Arm
void AHumanCharacter::SetControlMode(EControlMode NewControlMode)
{
	CurrentControlMode = NewControlMode;

	switch (CurrentControlMode)
	{
		case EControlMode::TPS:
		{
			ArmLengthTo = 300.0f;
			Camera->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -50.0f), FRotator(-15.0f, 0.0f, 0.0f));
			UserCameraArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 310.0f), FRotator(-30.0f, 0.0f, 0.0f));
			UserCameraArm->bUsePawnControlRotation = true;//
			UserCameraArm->bInheritPitch = true;
			UserCameraArm->bInheritRoll = true;
			UserCameraArm->bInheritYaw = true;
			UserCameraArm->bDoCollisionTest = true;
			bUseControllerRotationYaw = true;//
		}break;
		case EControlMode::FPS:
		{			
			ArmLengthTo = 0.0f;
			Camera->SetRelativeLocationAndRotation(FVector(5.0f, 5.0f, 78.0f), FRotator(0.0f, 0.0f, 0.0f));
			UserCameraArm->SetRelativeLocation(FVector(0.0f, 0.0f, 88.0f));
			UserCameraArm->bUsePawnControlRotation = true;
			UserCameraArm->bInheritPitch = true;
			UserCameraArm->bInheritRoll = true;
			UserCameraArm->bInheritYaw = true;
			UserCameraArm->bDoCollisionTest = true;
			bUseControllerRotationYaw = true;
		}break;
	}
}

// Move Character
void AHumanCharacter::ForwardBack(float NewAxisValue)
{
	if(HumanAnim->Is_Reload==false && HumanAnim->Is_Death==false)	
		AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void AHumanCharacter::LeftRight(float NewAxisValue)
{
	if(HumanAnim->Is_Reload ==false && HumanAnim->Is_Death == false)
		AddMovementInput(GetActorRightVector(), NewAxisValue);
}

// Rotate Character
void AHumanCharacter::Turn(float NewAxisValue)
{
	if(HumanAnim->Is_Death == false) AddControllerYawInput(NewAxisValue);
}

void AHumanCharacter::LookUp(float NewAxisValue)
{
	if (HumanAnim->Is_Death == false)
	{	
		// 과회전 방지
		if (-36.0f <= HumanAnim->Rotate_Value.Roll && HumanAnim->Rotate_Value.Roll <= 36.0f)
		{
			AddControllerPitchInput(NewAxisValue);
			HumanAnim->Rotate_Value.Roll += NewAxisValue;
		}			
		else if (-36.0f > HumanAnim->Rotate_Value.Roll)
		{
			GetControlRotation().SetComponentForAxis(EAxis::Y, 90.0f);
			HumanAnim->Rotate_Value.Roll = -36.0f;
		}			
		else if (HumanAnim->Rotate_Value.Roll > 36.0f)
		{
			GetControlRotation().SetComponentForAxis(EAxis::Y, 270.0f);
			HumanAnim->Rotate_Value.Roll = 36.0f;
		}			
	}
}

// Fire
void AHumanCharacter::Zoom()
{
	if (Is_Zoom == false)
	{
		Is_Zoom = true;
		//Camera->AttachTo(GetMesh(), "head");
		HUD_Human->CrossHair_State = true;
		SetControlMode(EControlMode::FPS);
	}
	else if (Is_Zoom == true)
	{
		Is_Zoom = false;
		//Camera->AttachTo(UserCameraArm);
		HUD_Human->CrossHair_State = false;
		SetControlMode(EControlMode::TPS);
	}
	HUD_Human->HUD_HPSP();
}

void AHumanCharacter::StartFire()
{
	if (ammo > 0)
	{
		isFiring = true;
		HumanAnim->IsFire = isFiring;
		Fire();
	}
}

void AHumanCharacter::Fire()
{
	if (isFiring)
	{
		// 프로젝타일 발사를 시도합니다.
		if (WeaponBulletClass)
		{
			// MuzzleOffset 을 카메라 스페이스에서 월드 스페이스로 변환합니다.
			FVector CameraLocation;
			FRotator CameraRotation;
			GetActorEyesViewPoint(CameraLocation, CameraRotation);
			
			MuzzleLocation = this->ActorToWorld().GetLocation() + FTransform(CameraRotation).TransformVector(MuzzleOffset);
			FRotator MuzzleRotation = CameraRotation;

			UWorld* World = GetWorld();
			if (World)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = Instigator;

				// 총구 위치에 발사체를 스폰시킵니다.
				AHumanWeaponBullet* Bullet = World->SpawnActor<AHumanWeaponBullet>(WeaponBulletClass, MuzzleLocation, MuzzleRotation, SpawnParams);
				if (Bullet)
				{
					// 발사 방향을 알아냅니다.
					FVector LaunchDirection = MuzzleRotation.Vector();
					Bullet->FireInDirection(LaunchDirection);
					Bullet->FireActor(this);
				}
			}
		}

		ammo--;
		if (ammo > 0)
		{
			// 연사를 위한 StartFire 함수 생성			
			GetWorld()->GetTimerManager().SetTimer(timer, this, &AHumanCharacter::Fire, 0.1f, false);
		}
		else StopFire();
	}
}

void AHumanCharacter::StopFire()
{
	isFiring = false;
	HumanAnim->IsFire = isFiring;
}
void AHumanCharacter::Walk()
{
	print("Input Shift");
	Is_Walking = true;
	HumanAnim->Is_Walk = Is_Walking;
	GetCharacterMovement()->MaxWalkSpeed = 1500.0f;
}
void AHumanCharacter::Stop_Walk()
{
	Is_Walking = false;
	HumanAnim->Is_Walk = Is_Walking;
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
}
void AHumanCharacter::ReloadFunc()
{
	ammo = 30;
	HumanAnim->Is_Reload = true;
	GetCharacterMovement()->JumpZVelocity = 0.0f;
}
void AHumanCharacter::Stop_ReloadFunc()
{
	HumanAnim->Is_Reload = false;
	GetCharacterMovement()->JumpZVelocity = 400.0;
}
void AHumanCharacter::Death()
{
	RespawnTime += 2.0f;
	HumanAnim->Is_Death = true;
	HUD_Human->Death_bar = true;
	GetCharacterMovement()->JumpZVelocity = 0.0f;
	HUD_Human->HUD_Respawn();

	if (DeathTime <= RespawnTime)
		Respawn();
}
void AHumanCharacter::Respawn()
{
	ammo = 30;
	CurrentHp = 100.0f;
	CurrentSP = 0.0f;
	HumanAnim->Is_Death = false;
	HUD_Human->Death_bar = false;
	RespawnTime = 0.0f;
	SetActorLocation(vec);
	GetCharacterMovement()->JumpZVelocity = 400.0f;
}

// Set Muzzle
FVector AHumanCharacter::SetMuzzlePos()
{	
	return HumanAnim->Translation_Value;
}

FRotator AHumanCharacter::SetMuzzleRot()
{
	return HumanAnim->Rotate_Value * 2.0f;
}

// Install
void AHumanCharacter::StartCollect()
{
	if (isTrigger == true && HUD_Human->CollectCount == 2)
	{
		if (PerCollect <= 100.0f)
		{
			print("StartCollect");
			printf("Collect : %f", PerCollect);

			PerCollect += 1.0f;
			HUD_Human->Human_Collect_State = true;
			HUD_Human->HUD_CollectBar();
		}
	}
	else print("StartCollect false");
}

void AHumanCharacter::Collecting()
{
	if (isTrigger == true && HUD_Human->CollectCount == 2)
	{
		if (PerCollect <= 100.0f)
		{
			print("Collecting");
			printf("Collect : %f", PerCollect);

			PerCollect += 1.0f;
		}
		else if (PerCollect > 100.0f)
		{
			print("Paust Activate");

			isTrigger = false;
			ColletEnd = true;
			HUD_Human->Human_Collect_State = false;			
			HUD_Human->HUD_CollectBar();
		}
	}
	else print("Collecting false");
}

void AHumanCharacter::EndCollect()
{
	if (isTrigger == true && HUD_Human->CollectCount == 2)
	{
		if (PerCollect <= 100.0f)
		{
			print("EndCollect");
			printf("Collect : %f", PerCollect);

			PerCollect += 1.0f;
			HUD_Human->Human_Collect_State = false;
			HUD_Human->HUD_CollectBar();
		}
	}
	else print("EndCollect false");
}
