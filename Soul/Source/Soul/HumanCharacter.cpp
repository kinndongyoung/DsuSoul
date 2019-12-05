#include "HumanCharacter.h"
#include "HumanAnimInstance.h"
#include "HumanWeapon.h"
#include "HumanWeaponBullet.h"

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

	// Jump Height
	GetCharacterMovement()->JumpZVelocity = 600.0f;

	// Bullet Initialize
	isFiring = false;
	MuzzleOffset = FVector(100.0f, 0.0f, 0.0f);
	
	static ConstructorHelpers::FObjectFinder<UBlueprint> BP_SOUL_WEAPON_BULLET(TEXT("/Game/Project_Soul/BluePrint/BP_HumanWeaponBullet.BP_HumanWeaponBullet"));

	if (BP_SOUL_WEAPON_BULLET.Succeeded())
		WeaponBulletClass = BP_SOUL_WEAPON_BULLET.Object->GeneratedClass;
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

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AHumanCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &AHumanCharacter::StartFire);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Released, this, &AHumanCharacter::StopFire);

	PlayerInputComponent->BindAction(TEXT("WallLStand"), IE_Released, this, &AHumanCharacter::WallLStand);
	PlayerInputComponent->BindAction(TEXT("WallLStandFire"), IE_Released, this, &AHumanCharacter::WallLStandFire);
	PlayerInputComponent->BindAction(TEXT("WallRStand"), IE_Released, this, &AHumanCharacter::WallRStand);
	PlayerInputComponent->BindAction(TEXT("WallRStandFire"), IE_Released, this, &AHumanCharacter::WallRStandFire);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AHumanCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AHumanCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AHumanCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AHumanCharacter::LookUp);

}

// Set Camera Arm
void AHumanCharacter::SetControlMode(EControlMode NewControlMode)
{
	ArmLengthTo = 200.0f;
	UserCameraArm->bUsePawnControlRotation = true;
	UserCameraArm->bInheritPitch = true;
	UserCameraArm->bInheritRoll = true;
	UserCameraArm->bInheritYaw = true;
	UserCameraArm->bDoCollisionTest = true;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
}

// Move Character
void AHumanCharacter::UpDown(float NewAxisValue)
{
	if (!HumanAnim->GetIsWallLStandFunc() && !HumanAnim->GetIsWallRStandFunc())
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), NewAxisValue);
}

void AHumanCharacter::LeftRight(float NewAxisValue)
{
	if (!HumanAnim->GetIsWallLStandFunc() && !HumanAnim->GetIsWallRStandFunc())
		AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), NewAxisValue);
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

//Wall
void AHumanCharacter::WallRStand()
{
	if (HumanAnim->GetIsWallRStandFunc())
	{

		GetCharacterMovement()->JumpZVelocity = 600.0f;
		HumanAnim->SetIsWallRStandFunc(false);
	}
	else
	{

		GetCharacterMovement()->JumpZVelocity = 0.0f;
		HumanAnim->SetIsWallRStandFunc(true);
	}
}

void AHumanCharacter::WallRStandFire()
{
	if (HumanAnim->GetIsWallRStandFunc())
	{
		isFiring = true;
		HumanAnim->IsFire = isFiring;
		Fire();
	}
}

void AHumanCharacter::WallLStand()
{
	if (HumanAnim->GetIsWallLStandFunc())
	{

		GetCharacterMovement()->JumpZVelocity = 600.0f;
		HumanAnim->SetIsWallLStandFunc(false);
	}
	else
	{

		GetCharacterMovement()->JumpZVelocity = 0.0f;
		HumanAnim->SetIsWallLStandFunc(true);
	}
}

void AHumanCharacter::WallLStandFire()
{
	if (HumanAnim->GetIsWallLStandFunc())
	{
		isFiring = true;
		HumanAnim->IsFire = isFiring;
		Fire();
	}
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
				if (HumanAnim->GetIsWallLStandFunc())
				{
					MuzzleLocation = UserWeapon->ActorToWorld().GetLocation() + FVector(30.0f, 10.0f, 0.0f);
				}
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
