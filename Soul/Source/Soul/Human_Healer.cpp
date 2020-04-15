#include "Human_Healer.h"
#include "Anim_Human_Healer.h"

// 생성자에서 User 초기화
AHuman_Healer::AHuman_Healer()
{
	// Set Character Job
	CurrentCharJob = ECharacterJob::CLASS_HEALER;

	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonLtBelica/Characters/Heroes/Belica/Skins/PolarStrike/Meshes/Belica_PolarStrike.Belica_PolarStrike"));
	if (SK_SOUL_USER.Succeeded()) GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);

	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_SOUL_ANIM(TEXT("/Game/Project_Soul/BluePrint/BP_HumanHealer.BP_HumanHealer_C"));
	if (BP_SOUL_ANIM.Succeeded()) GetMesh()->SetAnimInstanceClass(BP_SOUL_ANIM.Class);
}

void AHuman_Healer::BeginPlay()
{
	AHumanCharacter::BeginPlay();

	// Anim Setting
	AnimHuman = Cast<UAnim_Human_Healer>(GetMesh()->GetAnimInstance());
	AnimParent = AnimHuman;
}

void AHuman_Healer::Tick(float DeltaTime)
{
	AHumanCharacter::Tick(DeltaTime);
}

void AHuman_Healer::PostInitializeComponents()
{
	AHumanCharacter::PostInitializeComponents();
	Super::PostInitializeComponents();
}

void AHuman_Healer::PossessedBy(AController* NewController)
{
	AHumanCharacter::PossessedBy(NewController);
	Super::PossessedBy(NewController);
}

// Input Key
void AHuman_Healer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	AHumanCharacter::SetupPlayerInputComponent(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 카메라
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &AHuman_Healer::Zoom);
	PlayerInputComponent->BindAction(TEXT("CameraSwitch"), IE_Pressed, this, &AHuman_Healer::CameraSwitch);

	// 상호작용
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Pressed, this, &AHuman_Healer::StartCollect);
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Repeat, this, &AHuman_Healer::Collecting);
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Released, this, &AHuman_Healer::EndCollect);
}

// Set Camera
void AHuman_Healer::SetControlMode(EControlMode NewControlMode)
{
	AHumanCharacter::SetControlMode(NewControlMode);
}

void AHuman_Healer::Zoom()
{
	AHumanCharacter::Zoom();
}

void AHuman_Healer::CameraSwitch()
{
	AHumanCharacter::CameraSwitch();
}

// Move Character
void AHuman_Healer::ForwardBack(float NewAxisValue)
{
	AHumanCharacter::ForwardBack(NewAxisValue);
}

void AHuman_Healer::LeftRight(float NewAxisValue)
{
	AHumanCharacter::LeftRight(NewAxisValue);
}

// Rotate Character
void AHuman_Healer::Turn(float NewAxisValue)
{
	AHumanCharacter::Turn(NewAxisValue);
}

void AHuman_Healer::LookUp(float NewAxisValue)
{
	AHumanCharacter::LookUp(NewAxisValue);
}

// Fire
void AHuman_Healer::StartFire()
{
	AHumanCharacter::StartFire();
}

void AHuman_Healer::Fire()
{
	AHumanCharacter::Fire();

	if (nullptr == AnimHuman) return;
	AnimHuman->Human_Healer_AttackMontage();
}

void AHuman_Healer::StopFire()
{
	AHumanCharacter::StopFire();
}

// Active
void AHuman_Healer::Walk()
{
	AHumanCharacter::Walk();
}

void AHuman_Healer::Stop_Walk()
{
	AHumanCharacter::Stop_Walk();
}

void AHuman_Healer::ReloadFunc()
{
	AHumanCharacter::ReloadFunc();
}

void AHuman_Healer::Stop_ReloadFunc()
{
	AHumanCharacter::Stop_ReloadFunc();
}

// Death
void AHuman_Healer::Death()
{
	AHumanCharacter::Death();
}

void AHuman_Healer::Respawn()
{
	AHumanCharacter::Respawn();
}

// Muzzle
FVector AHuman_Healer::SetMuzzlePos()
{
	AHumanCharacter::SetMuzzlePos();
	return AnimHuman->Translation_Value;
}

FRotator AHuman_Healer::SetMuzzleRot()
{
	AHumanCharacter::EndCollect();
	return AnimHuman->Rotate_Value * 2.0f;
}

// Install
void AHuman_Healer::StartCollect()
{
	AHumanCharacter::EndCollect();
}

void AHuman_Healer::Collecting()
{
	AHumanCharacter::EndCollect();
}

void AHuman_Healer::EndCollect()
{
	AHumanCharacter::EndCollect();
}

// Collect Progress Bar
float AHuman_Healer::GetPerCollect()
{
	AHumanCharacter::GetPerCollect();
	return 0.0f;
}