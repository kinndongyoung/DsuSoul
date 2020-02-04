#include "AngelCharacter.h"
#include "AngelAnimInstance.h"
#include "HUD_Angel.h"
#include "Angel_InstallTrigger.h"

// 생성자에서 User 초기화
AAngelCharacter::AAngelCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	// Add Tag
	Tags.AddUnique(TEXT("Angel_Character"));
	
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
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonSerath/Characters/Heroes/Serath/Meshes/Serath.Serath"));

	if (SK_SOUL_USER.Succeeded())
		GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);
	
	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_HUMANCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_AngelChar.BP_AngelChar_C"));

	if (BP_ANIM_HUMANCHAR.Succeeded())
		GetMesh()->SetAnimInstanceClass(BP_ANIM_HUMANCHAR.Class);

	// Value Initialize
	SetControlMode(EControlMode::TPS);

	ArmLengthSpeed = 3.0f;
	ArmRotationSpeed = 10.0f;
	ammo = 30;

	// 스테이터스
	isFiring = false;
	MuzzleOffset = FVector(100.0f, 0.0f, 0.0f);

	DieState = false;
	Status_HP = 100.0f;

	// Install Value Init
	InstallCount = 5;
	PerInstall = 0.0f;
	isTrigger = false;	

	// Jump Height
	GetCharacterMovement()->JumpZVelocity = 600.0f;
}

void AAngelCharacter::BeginPlay()
{
	Super::BeginPlay();

	AngelAnim = Cast<UAngelAnimInstance>(GetMesh()->GetAnimInstance());
	HUD_Angel = Cast<AHUD_Angel>(GetWorld()->GetFirstPlayerController()->GetHUD());

	// Controll Setting
	bUseControllerRotationYaw = true;
}

void AAngelCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Status_HP <= 0.0f) DieState = true;
	UserCameraArm->TargetArmLength = FMath::FInterpTo(UserCameraArm->TargetArmLength, ArmLengthTo, DeltaTime, ArmLengthSpeed);
}

void AAngelCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AAngelCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

// Input Key
void AAngelCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AAngelCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &AAngelCharacter::StartFire);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Released, this, &AAngelCharacter::StopFire);

	// 상호작용
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Pressed, this, &AAngelCharacter::Sprint);
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Released, this, &AAngelCharacter::Stop_Sprint);
	
//	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Pressed, this, &AAngelCharacter::StartInstall);
//	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Repeat, this, &AAngelCharacter::Installing);
//	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Released, this, &AAngelCharacter::EndInstall);

	// 이동 및 회전
	PlayerInputComponent->BindAxis(TEXT("ForwardBack"), this, &AAngelCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AAngelCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AAngelCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AAngelCharacter::LookUp);
}

// Set Camera Arm
void AAngelCharacter::SetControlMode(EControlMode NewControlMode)
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
void AAngelCharacter::UpDown(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), NewAxisValue);
}

void AAngelCharacter::LeftRight(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), NewAxisValue);
}

// Rotate Character
void AAngelCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}

void AAngelCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}

void AAngelCharacter::StartFire()
{
	if (ammo >= 0)
	{
		isFiring = true;
		AngelAnim->IsFire = isFiring;
		Fire();
	}
}

void AAngelCharacter::Fire()
{
	if (isFiring)
	{
		// 프로젝타일 발사를 시도합니다.
		//if (WeaponBulletClass)
		//{
		//	// MuzzleOffset 을 카메라 스페이스에서 월드 스페이스로 변환합니다.
		//	//FVector MuzzleLocation = UserWeapon->ActorToWorld().GetLocation() + FVector(30.0f, 100.0f, 0.0f);
		//	//FRotator MuzzleRotation = GetMesh()->GetComponentRotation() + FRotator(0.0f, 90.0f, 0.0f);

		//	FVector CameraLocation;
		//	FRotator CameraRotation;
		//	GetActorEyesViewPoint(CameraLocation, CameraRotation);

		//	FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);
		//	FRotator MuzzleRotation = CameraRotation;

		//	// 조준을 약간 윗쪽으로 올려줍니다.
		//	MuzzleRotation.Pitch += 5.0f;
		//	UWorld* World = GetWorld();

		//	if (World)
		//	{
		//		FActorSpawnParameters SpawnParams;
		//		SpawnParams.Owner = this;
		//		SpawnParams.Instigator = Instigator;

		//		// 총구 위치에 발사체를 스폰시킵니다.
		//		AAngelWeaponBullet* Bullet = World->SpawnActor<AAngelWeaponBullet>(WeaponBulletClass, MuzzleLocation, MuzzleRotation, SpawnParams);
		//		if (Bullet)
		//		{
		//			// 발사 방향을 알아냅니다.
		//			FVector LaunchDirection = MuzzleRotation.Vector();
		//			//Bullet->FireInDirection(LaunchDirection);
		//		}
		//	}
		//}
		ammo--;
		// 연사를 위한 StartFire 함수 생성
		if (ammo >= 0)
			GetWorld()->GetTimerManager().SetTimer(timer, this, &AAngelCharacter::Fire, 0.1f, false);
		else StopFire();
	}
}

void AAngelCharacter::StopFire()
{
	isFiring = false;
	AngelAnim->IsFire = isFiring;
}
void AAngelCharacter::Sprint()
{
	print("Input Shift");
	Is_Spirnt = true;
	AngelAnim->Is_Walk = Is_Spirnt;
	GetCharacterMovement()->MaxWalkSpeed = 1500.0f;
}
void AAngelCharacter::Stop_Sprint()
{
	Is_Spirnt = false;
	AngelAnim->Is_Walk = Is_Spirnt;
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
}


// Install
//void AAngelCharacter::StartInstall()
//{
//	if (isTrigger == true && pt_Trigger->InstallState == true)
//	{
//		if (PerInstall <= 1.0f && InstallCount > 0)
//		{
//			print("StartInstall");
//			printf("Install : %f", pt_Trigger->InstallProcess);
//
//			pt_Trigger->InstallProcess += 0.01f;
//			PerInstall = pt_Trigger->InstallProcess;
//			HUD_Angel->Angel_Install_State = true;
//			HUD_Angel->HUD_Update(pt_Trigger->InstallProcess);
//		}
//	}
//	else print("StartInstall false");
//}
//
//void AAngelCharacter::Installing()
//{
//	if (isTrigger == true && pt_Trigger->InstallState == true)		
//	{
//		if (PerInstall <= 1.0f && InstallCount > 0)
//		{
//			print("Installing");
//			printf("Install : %f", pt_Trigger->InstallProcess);
//
//			pt_Trigger->InstallProcess += 0.01f;
//			PerInstall = pt_Trigger->InstallProcess;
//		}
//		else if (PerInstall > 1.0f && InstallCount > 0)
//		{
//			PerInstall = 0.0f;
//			InstallCount--;
//			printf("InstallCount : %d", InstallCount);
//
//			isTrigger = false;
//			pt_Trigger->InstallState = false;
//			HUD_Angel->Angel_Install_State = false;
//			if (InstallCount == 0)
//				UGameplayStatics::OpenLevel(this, "Winer");
//		}
//		HUD_Angel->HUD_Update(pt_Trigger->InstallProcess);
//	}
//	else print("Installing false");
//}
//
//void AAngelCharacter::EndInstall()
//{
//	if (isTrigger == true && pt_Trigger->InstallState == true)
//	{
//		if (PerInstall <= 1.0f && InstallCount > 0)
//		{
//			print("EndInstall");
//			printf("Install : %f", pt_Trigger->InstallProcess);
//
//			pt_Trigger->InstallProcess += 0.01f;
//			PerInstall = pt_Trigger->InstallProcess;
//			HUD_Angel->Angel_Install_State = false;
//			HUD_Angel->HUD_Update(pt_Trigger->InstallProcess);
//		}
//	}
//	else print("EndInstall false");
//}
