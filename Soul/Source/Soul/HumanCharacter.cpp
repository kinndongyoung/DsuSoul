#include "HumanCharacter.h"
#include "HumanAnimInstance.h"
#include "HumanWeapon.h"
#include "HumanWeaponBullet.h"
#include "MyAIController.h"

// 생성자에서 User 초기화
AHumanCharacter::AHumanCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

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
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/AnimStarterPack/UE4_Mannequin/Mesh/SK_Mannequin.SK_Mannequin"));

	if (SK_SOUL_USER.Succeeded())
		GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);
	
	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_HUMANCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_Human.BP_Human_C"));

	if (BP_ANIM_HUMANCHAR.Succeeded())
		GetMesh()->SetAnimInstanceClass(BP_ANIM_HUMANCHAR.Class);

	// Value Initialize
	SetControlMode(EControlMode::TPS);

	ArmLengthSpeed = 3.0f;
	ArmRotationSpeed = 10.0f;

	// Bullet Initialize
	isFiring = false;
	MuzzleOffset = FVector(100.0f, 0.0f, 0.0f);

	//모션 변수
	Is_Walking = false;
	Is_LayDowning = false;
	
	static ConstructorHelpers::FObjectFinder<UBlueprint> BP_SOUL_WEAPON_BULLET(TEXT("/Game/Project_Soul/BluePrint/BP_HumanWeaponBullet.BP_HumanWeaponBullet"));

	if (BP_SOUL_WEAPON_BULLET.Succeeded())
		WeaponBulletClass = BP_SOUL_WEAPON_BULLET.Object->GeneratedClass;

	//인간 속도
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
	//점프
	GetCharacterMovement()->JumpZVelocity = 500.0f;

	AIControllerClass = AAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;


}

void AHumanCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Weapon Setting
	FName WeaponSocket(TEXT("WeaponPoint"));
	auto CurWeapon = GetWorld()->SpawnActor<AHumanWeapon>(FVector::ZeroVector, FRotator::ZeroRotator);

	if (nullptr != CurWeapon)
	{
		CurWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, WeaponSocket);
		UserWeapon = CurWeapon;
	}
}

void AHumanCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UserCameraArm->TargetArmLength = FMath::FInterpTo(UserCameraArm->TargetArmLength, ArmLengthTo, DeltaTime, ArmLengthSpeed);
	if(!bUseControllerRotationYaw)
		bUseControllerRotationYaw = true;
}

void AHumanCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	HumanAnim = Cast<UHumanAnimInstance>(GetMesh()->GetAnimInstance());
}

void AHumanCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (IsPlayerControlled())
	{
		SetControlMode(EControlMode::TPS);
		GetCharacterMovement()->MaxWalkSpeed = 700.0f;
	}
	else
	{
		SetControlMode(EControlMode::NPC);
		GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	}
}

// Input Key
void AHumanCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AHumanCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &AHumanCharacter::StartFire);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Released, this, &AHumanCharacter::StopFire);
	//모션
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Pressed, this, &AHumanCharacter::Walk);
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Released, this, &AHumanCharacter::Stop_Walk);
	PlayerInputComponent->BindAction(TEXT("LayDown"), EInputEvent::IE_Pressed, this, &AHumanCharacter::LayDown);
	PlayerInputComponent->BindAction(TEXT("LayDown"), EInputEvent::IE_Released, this, &AHumanCharacter::Stop_LayDown);
	//행동
	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AHumanCharacter::UpDown);
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
		ArmLengthTo = 200.0f;
		UserCameraArm->bUsePawnControlRotation = true;
		UserCameraArm->bInheritPitch = true;
		UserCameraArm->bInheritRoll = true;
		UserCameraArm->bInheritYaw = true;
		UserCameraArm->bDoCollisionTest = true;
		bUseControllerRotationYaw = false;
		//GetCharacterMovement()->bOrientRotationToMovement = true;
		//GetCharacterMovement()->bUseControllerDesiredRotation = false;
		//GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
		break;
	case EControlMode::NPC:
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 480.0f, 0.0f);
		break;
	}
}
// Move Character
void AHumanCharacter::UpDown(float NewAxisValue)
{
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
	//AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), NewAxisValue);
}

void AHumanCharacter::LeftRight(float NewAxisValue)
{
	AddMovementInput(GetActorRightVector(), NewAxisValue);
	//AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), NewAxisValue);
}

// Rotate Character
void AHumanCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
	

}

void AHumanCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}

// Fire
void AHumanCharacter::StartFire()
{
	isFiring = true;
	HumanAnim->IsFire = isFiring;
	Fire();
	
}

void AHumanCharacter::Fire()
{
	if (isFiring)
	{
		// 프로젝타일 발사를 시도합니다.
		if (WeaponBulletClass)
		{
			// MuzzleOffset 을 카메라 스페이스에서 월드 스페이스로 변환합니다.
			FVector MuzzleLocation = UserWeapon->ActorToWorld().GetLocation() + FVector(30.0f, 10.0f, 0.0f);
			FRotator MuzzleRotation = GetMesh()->GetComponentRotation() + FRotator(0.0f, 90.0f, 0.0f);

			// 조준을 약간 윗쪽으로 올려줍니다.
			MuzzleRotation.Pitch += 5.0f;
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
				}
			}
		}

		// 연사를 위한 StartFire 함수 생성
		GetWorld()->GetTimerManager().SetTimer(timer, this, &AHumanCharacter::Fire, 0.1f, false);
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
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
}
void AHumanCharacter::Stop_Walk()
{
	Is_Walking = false;
	HumanAnim->Is_Walk = Is_Walking;
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
}
void AHumanCharacter::LayDown()
{
	print("Input Ctrl");
	Is_LayDowning = true;
	HumanAnim->Is_LayDown = Is_LayDowning;
	GetCharacterMovement()->MaxWalkSpeed = 150.0f;
}
void AHumanCharacter::Stop_LayDown()
{
	Is_LayDowning = false;
	HumanAnim->Is_LayDown = Is_LayDowning;
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
}