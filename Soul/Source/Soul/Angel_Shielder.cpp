#include "Angel_Shielder.h"
#include "Anim_Angel_Shielder.h"

// 생성자에서 User 초기화
AAngel_Shielder::AAngel_Shielder()
{
	// Set Character Job
	CurrentCharJob = ECharacterJob::CLASS_TANKER;

	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonMinions/Characters/Minions/Down_Minions/Meshes/Minion_Lane_Super_Dawn.Minion_Lane_Super_Dawn"));
	if (SK_SOUL_USER.Succeeded()) GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);
	
	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_HUMANCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_AngelShielder.BP_AngelShielder_C"));
	if (BP_ANIM_HUMANCHAR.Succeeded()) GetMesh()->SetAnimInstanceClass(BP_ANIM_HUMANCHAR.Class);
}

void AAngel_Shielder::BeginPlay()
{
	AAngelCharacter::BeginPlay();

	// Anim Setting
	AnimAngel = Cast<UAnim_Angel_Shielder>(GetMesh()->GetAnimInstance());
	AnimParent = AnimAngel;
}

void AAngel_Shielder::Tick(float DeltaTime)
{
	AAngelCharacter::Tick(DeltaTime);
}

void AAngel_Shielder::PostInitializeComponents()
{
	AAngelCharacter::PostInitializeComponents();
	Super::PostInitializeComponents();
}

void AAngel_Shielder::PossessedBy(AController* NewController)
{
	AAngelCharacter::PossessedBy(NewController);
	Super::PossessedBy(NewController);
}

// Input Key
void AAngel_Shielder::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	AAngelCharacter::SetupPlayerInputComponent(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	// 카메라
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &AAngel_Shielder::Zoom);
	PlayerInputComponent->BindAction(TEXT("CameraSwitch"), IE_Pressed, this, &AAngel_Shielder::CameraSwitch);

	// 상호작용
	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Pressed, this, &AAngel_Shielder::StartInstall);
	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Repeat, this, &AAngel_Shielder::Installing);
	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Released, this, &AAngel_Shielder::EndInstall);
}

// Set Camera
void AAngel_Shielder::SetControlMode(EControlMode NewControlMode)
{
	AAngelCharacter::SetControlMode(NewControlMode);
}

void AAngel_Shielder::Zoom()
{
	AAngelCharacter::Zoom();
}

void AAngel_Shielder::CameraSwitch()
{
	AAngelCharacter::CameraSwitch();
}

// Move Character
void AAngel_Shielder::ForwardBack(float NewAxisValue)
{
	AAngelCharacter::ForwardBack(NewAxisValue);
}

void AAngel_Shielder::LeftRight(float NewAxisValue)
{
	AAngelCharacter::LeftRight(NewAxisValue);
}

// Rotate Character
void AAngel_Shielder::Turn(float NewAxisValue)
{
	AAngelCharacter::Turn(NewAxisValue);
}

void AAngel_Shielder::LookUp(float NewAxisValue)
{
	AAngelCharacter::LookUp(NewAxisValue);
}

// Fire
void AAngel_Shielder::StartFire()
{
	AAngelCharacter::StartFire();
}

void AAngel_Shielder::Fire()
{
	AAngelCharacter::Fire();

	if (nullptr == AnimAngel) return;
	//AnimAngel->AngelMotangeAttack();
}

void AAngel_Shielder::StopFire()
{
	AAngelCharacter::StopFire();
}

// Active
void AAngel_Shielder::Walk()
{
	AAngelCharacter::Walk();
}

void AAngel_Shielder::Stop_Walk()
{
	AAngelCharacter::Stop_Walk();
}

void AAngel_Shielder::ReloadFunc()
{
	AAngelCharacter::ReloadFunc();
}

void AAngel_Shielder::Stop_ReloadFunc()
{
	AAngelCharacter::Stop_ReloadFunc();
}

// Death
void AAngel_Shielder::Death()
{
	AAngelCharacter::Death();
}

void AAngel_Shielder::Respawn()
{
	AAngelCharacter::Respawn();
}

// Muzzle
FVector AAngel_Shielder::SetMuzzlePos()
{
	AAngelCharacter::SetMuzzlePos();
	return AnimAngel->Translation_Value;
}

FRotator AAngel_Shielder::SetMuzzleRot()
{
	AAngelCharacter::SetMuzzleRot();
	return AnimAngel->Rotate_Value * 2.0f;
}

// Install
void AAngel_Shielder::StartInstall()
{
	AAngelCharacter::StartInstall();
}

void AAngel_Shielder::Installing()
{
	AAngelCharacter::Installing();
}

void AAngel_Shielder::EndInstall()
{
	AAngelCharacter::EndInstall();
}
