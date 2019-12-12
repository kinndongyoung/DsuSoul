#include "HumanCharacter.h"
#include "HumanAnimInstance.h"
#include "HumanWeapon.h"
#include "HumanWeaponBullet.h"
#include "HUD_Human.h"

// �����ڿ��� User �ʱ�ȭ
AHumanCharacter::AHumanCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	Tags.AddUnique(TEXT("Human_Character"));

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

	//��� ����
	Is_Walking = false;
	
	static ConstructorHelpers::FObjectFinder<UBlueprint> BP_SOUL_WEAPON_BULLET(TEXT("/Game/Project_Soul/BluePrint/BP_HumanWeaponBullet.BP_HumanWeaponBullet"));

	if (BP_SOUL_WEAPON_BULLET.Succeeded())
		WeaponBulletClass = BP_SOUL_WEAPON_BULLET.Object->GeneratedClass;

	//�ΰ� �ӵ�
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
	//����
	GetCharacterMovement()->JumpZVelocity = 500.0f;

	//�ΰ� ü��
	Initial_HP = 100.0f;
	CurrentHp = Initial_HP;
	//�ΰ� SP
	Initial_SP = 0.0f;
	CurrentSP = Initial_SP;

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
	UpdateCurrentHP();
	UpdateCurrentSP();
	if (CurrentHp <= 0)
	{
		Death();
	}
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
	//���
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Pressed, this, &AHumanCharacter::Walk);
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Released, this, &AHumanCharacter::Stop_Walk);
	PlayerInputComponent->BindAction(TEXT("LayDown"), EInputEvent::IE_Pressed, this, &AHumanCharacter::LayDownFunc);
	PlayerInputComponent->BindAction(TEXT("SitDown"), EInputEvent::IE_Pressed, this, &AHumanCharacter::SitDownFunc);
	PlayerInputComponent->BindAction(TEXT("Reload"), EInputEvent::IE_Pressed, this, &AHumanCharacter::ReloadFunc);
	PlayerInputComponent->BindAction(TEXT("Reload"), EInputEvent::IE_Released, this, &AHumanCharacter::Stop_ReloadFunc);
	//�ൿ
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
	if(HumanAnim->Is_Reload==false && HumanAnim->Is_Death==false)
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), NewAxisValue);
}

void AHumanCharacter::LeftRight(float NewAxisValue)
{
	if(HumanAnim->Is_Reload ==false && HumanAnim->Is_Death == false)
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), NewAxisValue);
}

// Rotate Character
void AHumanCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}

float AHumanCharacter::GetInitialHP()
{
	return Initial_HP;
}

float AHumanCharacter::GetCurrentInitialHP()
{
	return CurrentHp;
}

void AHumanCharacter::UpdateCurrentHP()
{
	CurrentHp = CurrentHp;
}

float AHumanCharacter::GetInitialSP()
{
	return Initial_SP;
}

float AHumanCharacter::GetCurrentInitialSP()
{
	return CurrentSP;
}

void AHumanCharacter::UpdateCurrentSP()
{
	CurrentSP = CurrentSP;
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
		// ������Ÿ�� �߻縦 �õ��մϴ�.
		if (WeaponBulletClass)
		{
			// MuzzleOffset �� ī�޶� �����̽����� ���� �����̽��� ��ȯ�մϴ�.
			FVector MuzzleLocation = UserWeapon->ActorToWorld().GetLocation() + FVector(30.0f, 100.0f, 0.0f);
			FRotator MuzzleRotation = GetMesh()->GetComponentRotation() + FRotator(0.0f, 90.0f, 0.0f);

			// ������ �ణ �������� �÷��ݴϴ�.
			MuzzleRotation.Pitch += 5.0f;
			UWorld* World = GetWorld();

			if (World)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = Instigator;

				// �ѱ� ��ġ�� �߻�ü�� ������ŵ�ϴ�.
				AHumanWeaponBullet* Bullet = World->SpawnActor<AHumanWeaponBullet>(WeaponBulletClass, MuzzleLocation, MuzzleRotation, SpawnParams);
				if (Bullet)
				{
					// �߻� ������ �˾Ƴ��ϴ�.
					FVector LaunchDirection = MuzzleRotation.Vector();
					Bullet->FireInDirection(LaunchDirection);
				}
			}
		}

		// ���縦 ���� StartFire �Լ� ����
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
void AHumanCharacter::LayDownFunc()
{
	print("X");

	if (HumanAnim->Is_LayDown)
	{
		HumanAnim->Is_LayDown = false;
		GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
		GetCharacterMovement()->JumpZVelocity = 500.0f;
	}
	else
	{
		HumanAnim->Is_LayDown = true;
		GetCharacterMovement()->MaxWalkSpeed = 150.0f;
		GetCharacterMovement()->JumpZVelocity = 0.0f;
	}
}
void AHumanCharacter::SitDownFunc()
{
	print("Ctrl");
	if (HumanAnim->Is_SitDown)
	{
		HumanAnim->Is_SitDown = false;
		GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
		GetCharacterMovement()->JumpZVelocity = 500.0f;
	}
	else
	{
		HumanAnim->Is_SitDown = true;
		GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	}
}
void AHumanCharacter::ReloadFunc()
{
	HumanAnim->Is_Reload = true;
	GetCharacterMovement()->JumpZVelocity = 0.0f;
}
void AHumanCharacter::Stop_ReloadFunc()
{
	HumanAnim->Is_Reload = false;
	GetCharacterMovement()->JumpZVelocity = 500.0f;
}
void AHumanCharacter::Death()
{
	HumanAnim->Is_Death = true;
	GetCharacterMovement()->JumpZVelocity = 0.0f;
}