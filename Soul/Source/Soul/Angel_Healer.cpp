#include "Angel_Healer.h"
#include "Anim_Angel_Healer.h"

// 생성자에서 User 초기화
AAngel_Healer::AAngel_Healer()
{
	// Set Character Job
	CurrentCharJob = ECharacterJob::CLASS_HEALER;

	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonSerath/Characters/Heroes/Serath/Meshes/Serath.Serath"));
	if (SK_SOUL_USER.Succeeded()) GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);

	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_HUMANCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_AngelHealer.BP_AngelHealer_C"));
	if (BP_ANIM_HUMANCHAR.Succeeded()) GetMesh()->SetAnimInstanceClass(BP_ANIM_HUMANCHAR.Class);
}

void AAngel_Healer::BeginPlay()
{
	AAngelCharacter::BeginPlay();

	// Anim Setting
	AnimAngel = Cast<UAnim_Angel_Healer>(GetMesh()->GetAnimInstance());
	AnimParent = AnimAngel;
}

void AAngel_Healer::Tick(float DeltaTime)
{
	AAngelCharacter::Tick(DeltaTime);
}

void AAngel_Healer::PostInitializeComponents()
{
	AAngelCharacter::PostInitializeComponents();
	Super::PostInitializeComponents();
}

void AAngel_Healer::PossessedBy(AController* NewController)
{
	AAngelCharacter::PossessedBy(NewController);
	Super::PossessedBy(NewController);
}

// Input Key
void AAngel_Healer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	AAngelCharacter::SetupPlayerInputComponent(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	// 카메라
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &AAngel_Healer::Zoom);
	PlayerInputComponent->BindAction(TEXT("CameraSwitch"), IE_Pressed, this, &AAngel_Healer::CameraSwitch);

	// 상호작용
	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Pressed, this, &AAngel_Healer::StartInstall);
	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Repeat, this, &AAngel_Healer::Installing);
	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Released, this, &AAngel_Healer::EndInstall);
}

// Set Camera
void AAngel_Healer::SetControlMode(EControlMode NewControlMode)
{
	AAngelCharacter::SetControlMode(NewControlMode);
}

void AAngel_Healer::Zoom()
{
	AAngelCharacter::Zoom();
}

void AAngel_Healer::CameraSwitch()
{
	AAngelCharacter::CameraSwitch();
}

// Move Character
void AAngel_Healer::ForwardBack(float NewAxisValue)
{
	AAngelCharacter::ForwardBack(NewAxisValue);
}

void AAngel_Healer::LeftRight(float NewAxisValue)
{
	AAngelCharacter::LeftRight(NewAxisValue);
}

// Rotate Character
void AAngel_Healer::Turn(float NewAxisValue)
{
	AAngelCharacter::Turn(NewAxisValue);
}

void AAngel_Healer::LookUp(float NewAxisValue)
{
	AAngelCharacter::LookUp(NewAxisValue);
}

// Fire
void AAngel_Healer::StartFire()
{
	AAngelCharacter::StartFire();
}

void AAngel_Healer::Fire()
{
	AAngelCharacter::Fire();

	if (nullptr == AnimAngel) return;
	//AnimAngel->AngelMotangeAttack();
}

void AAngel_Healer::StopFire()
{
	AAngelCharacter::StopFire();
}

// Active
void AAngel_Healer::Walk()
{
	AAngelCharacter::Walk();
}

void AAngel_Healer::Stop_Walk()
{
	AAngelCharacter::Stop_Walk();
}

void AAngel_Healer::ReloadFunc()
{
	AAngelCharacter::ReloadFunc();
}

void AAngel_Healer::Stop_ReloadFunc()
{
	AAngelCharacter::Stop_ReloadFunc();
}

// Death
void AAngel_Healer::Death()
{
	AAngelCharacter::Death();
}

void AAngel_Healer::Respawn()
{
	AAngelCharacter::Respawn();
}

// Muzzle
FVector AAngel_Healer::SetMuzzlePos()
{
	AAngelCharacter::SetMuzzlePos();
	return AnimAngel->Translation_Value;
}

FRotator AAngel_Healer::SetMuzzleRot()
{
	AAngelCharacter::SetMuzzleRot();
	return AnimAngel->Rotate_Value * 2.0f;
}

// Install
void AAngel_Healer::StartInstall()
{
	AAngelCharacter::StartInstall();
}

void AAngel_Healer::Installing()
{
	AAngelCharacter::Installing();
}

void AAngel_Healer::EndInstall()
{
	AAngelCharacter::EndInstall();
}
