#include "DevilCharacter.h"
#include "DevilAnimInstance.h"
#include "HUD_Devil.h"
#include "DevilWeaponBullet.h"

// 생성자에서 User 초기화
ADevilCharacter::ADevilCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// Add Tag
	Tags.AddUnique(TEXT("Devil_Character"));

	// Camera Create
	UserCameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CAMERA_ARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	// Camera Initialize
	UserCameraArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(UserCameraArm);

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	UserCameraArm->TargetArmLength = 200.0f;
	UserCameraArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 40.0f), FRotator(-30.0f, 0.0f, 0.0f));
	
	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonCountess/Characters/Heroes/Countess/Meshes/SM_Countess.SM_Countess"));

	if (SK_SOUL_USER.Succeeded())
		GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);
	
	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_DEVILCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_DevilChar.BP_DevilChar_C"));

	if (BP_ANIM_DEVILCHAR.Succeeded())
		GetMesh()->SetAnimInstanceClass(BP_ANIM_DEVILCHAR.Class);
	
	static ConstructorHelpers::FObjectFinder<UBlueprint> BP_SOUL_WEAPON_BULLET(TEXT("/Game/Project_Soul/BluePrint/BP_DevilWeaponBullet.BP_DevilWeaponBullet"));

	if (BP_SOUL_WEAPON_BULLET.Succeeded())
		WeaponBulletClass = BP_SOUL_WEAPON_BULLET.Object->GeneratedClass;

	// Value Initialize
	SetControlMode(EControlMode::TPS);

	ArmLengthSpeed = 3.0f;
	ArmRotationSpeed = 10.0f;
	ammo = 30;
	// Bullet Initialize
	isFiring = false;
	MuzzleOffset = FVector(100.0f, 0.0f, 0.0f);


	// Jump Height
	GetCharacterMovement()->JumpZVelocity = 500.0f;

	//
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
	//악마 체력
	Initial_HP = 100.0f;
	CurrentHp = Initial_HP;
	//악마 SP
	Initial_SP = 0.0f;
	CurrentSP = Initial_SP;
	//Respawn
	DeathTime = 600.0f;
	RespawnTime = 0.0f;
}

void ADevilCharacter::BeginPlay()
{
	Super::BeginPlay();
	HUD_Devil = Cast<AHUD_Devil>(GetWorld()->GetFirstPlayerController()->GetHUD());

	// Controll Setting
	bUseControllerRotationYaw = true;
}

void ADevilCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	HUD_Devil->HUD_Update();
	UserCameraArm->TargetArmLength = FMath::FInterpTo(UserCameraArm->TargetArmLength, ArmLengthTo, DeltaTime, ArmLengthSpeed);
	
	FTransform tr = GetTransform();
	if (CurrentHp <= 0)
		Death();
	if (tr.GetTranslation().Z <= -110)
		CurrentHp -= 3;
	printf("%.2f", CurrentHp);
}

void ADevilCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	DevilAnim = Cast<UDevilAnimInstance>(GetMesh()->GetAnimInstance());
}

void ADevilCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

// Input Key
void ADevilCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ADevilCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ADevilCharacter::StartFire);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Released, this, &ADevilCharacter::StopFire);


	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Pressed, this, &ADevilCharacter::Sprint);
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Released, this, &ADevilCharacter::Stop_Sprint);

	PlayerInputComponent->BindAxis(TEXT("ForwardBack"), this, &ADevilCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &ADevilCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ADevilCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ADevilCharacter::LookUp);
}

// Set Camera Arm
void ADevilCharacter::SetControlMode(EControlMode NewControlMode)
{
	ArmLengthTo = 200.0f;
	UserCameraArm->bUsePawnControlRotation = true;
	UserCameraArm->bInheritPitch = true;
	UserCameraArm->bInheritRoll = true;
	UserCameraArm->bInheritYaw = true;
	UserCameraArm->bDoCollisionTest = true;
	bUseControllerRotationYaw = true;
	//GetCharacterMovement()->bOrientRotationToMovement = true;
	//GetCharacterMovement()->bUseControllerDesiredRotation = false;
	//GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
}

// Move Character
void ADevilCharacter::UpDown(float NewAxisValue)
{
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void ADevilCharacter::LeftRight(float NewAxisValue)
{
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}

// Rotate Character
void ADevilCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}

void ADevilCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}

void ADevilCharacter::StartFire()
{
	if (ammo >= 0)
	{
		isFiring = true;
		DevilAnim->IsFire = isFiring;
		Fire();
	}
}

void ADevilCharacter::Fire()
{
	if (isFiring)
	{
		// 프로젝타일 발사를 시도합니다.
		if (WeaponBulletClass)
		{
			// MuzzleOffset 을 카메라 스페이스에서 월드 스페이스로 변환합니다.
			//FVector MuzzleLocation = UserWeapon->ActorToWorld().GetLocation() + FVector(30.0f, 100.0f, 0.0f);
			//FRotator MuzzleRotation = GetMesh()->GetComponentRotation() + FRotator(0.0f, 90.0f, 0.0f);

			FVector CameraLocation;
			FRotator CameraRotation;
			GetActorEyesViewPoint(CameraLocation, CameraRotation);

			FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);
			FRotator MuzzleRotation = CameraRotation;

			// 조준을 약간 윗쪽으로 올려줍니다.
			MuzzleRotation.Pitch += 5.0f;
			UWorld* World = GetWorld();

			if (World)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = Instigator;

				// 총구 위치에 발사체를 스폰시킵니다.
				ADevilWeaponBullet* Bullet = World->SpawnActor<ADevilWeaponBullet>(WeaponBulletClass, MuzzleLocation, MuzzleRotation, SpawnParams);
				if (Bullet)
				{
					// 발사 방향을 알아냅니다.
					FVector LaunchDirection = MuzzleRotation.Vector();
					Bullet->FireInDirection(LaunchDirection);
				}
			}
		}
		ammo--;
		// 연사를 위한 StartFire 함수 생성
		if (ammo >= 0)
			GetWorld()->GetTimerManager().SetTimer(timer, this, &ADevilCharacter::Fire, 0.1f, false);
		else StopFire();
	}
}

void ADevilCharacter::StopFire()
{
	isFiring = false;
	DevilAnim->IsFire = isFiring;
}
void ADevilCharacter::Sprint()
{
	print("Input Shift");
	Is_Spirnt = true;
	DevilAnim->Is_Walk = Is_Spirnt;
	GetCharacterMovement()->MaxWalkSpeed = 1500.0f;
}
void ADevilCharacter::Stop_Sprint()
{
	Is_Spirnt = false;
	DevilAnim->Is_Walk = Is_Spirnt;
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
}
void ADevilCharacter::Death()
{
	RespawnTime += 2.0f;
	DevilAnim->Is_Death = true;
	GetCharacterMovement()->JumpZVelocity = 0.0f;
	if (DeathTime <= RespawnTime)
		Respawn();
	printf("%.2f", RespawnTime);
}
void ADevilCharacter::Respawn()
{
	ammo = 30;
	CurrentHp = 100.0f;
	CurrentSP = 0.0f;
	DevilAnim->Is_Death = false;
	RespawnTime = 0.0f;
	//SetActorLocation(vec);

	//GetCharacterMovement()->JumpZVelocity = 400.0f;
}
