#include "Angel_Dealer.h"
#include "Anim_Angel_Dealer.h"

// 생성자에서 User 초기화
AAngel_Dealer::AAngel_Dealer()
{
	// Set Character Job
	CurrentCharJob = ECharacterJob::CLASS_DEALER;

	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonSparrow/Characters/Heroes/Sparrow/Skins/Raven/Meshes/Sparrow_Raven.Sparrow_Raven"));
	if (SK_SOUL_USER.Succeeded()) GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);

	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_HUMANCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_AngelDealer.BP_AngelDealer_C"));
	if (BP_ANIM_HUMANCHAR.Succeeded()) GetMesh()->SetAnimInstanceClass(BP_ANIM_HUMANCHAR.Class);
}

void AAngel_Dealer::BeginPlay()
{
	AAngelCharacter::BeginPlay();

	// Anim Setting
	AnimAngel = Cast<UAnim_Angel_Dealer>(GetMesh()->GetAnimInstance());
	AnimParent = AnimAngel;
}

void AAngel_Dealer::Tick(float DeltaTime)
{
	AAngelCharacter::Tick(DeltaTime);
}

void AAngel_Dealer::PostInitializeComponents()
{
	AAngelCharacter::PostInitializeComponents();
	Super::PostInitializeComponents();
}

void AAngel_Dealer::PossessedBy(AController* NewController)
{
	AAngelCharacter::PossessedBy(NewController);
	Super::PossessedBy(NewController);
}

// Input Key
void AAngel_Dealer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	AAngelCharacter::SetupPlayerInputComponent(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 카메라
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &AAngel_Dealer::Zoom);
	PlayerInputComponent->BindAction(TEXT("CameraSwitch"), IE_Pressed, this, &AAngel_Dealer::CameraSwitch);

	// 상호작용
	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Pressed, this, &AAngel_Dealer::StartInstall);
	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Repeat, this, &AAngel_Dealer::Installing);
	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Released, this, &AAngel_Dealer::EndInstall);
}

// Set Camera
void AAngel_Dealer::SetControlMode(EControlMode NewControlMode)
{
	AAngelCharacter::SetControlMode(NewControlMode);
}

void AAngel_Dealer::Zoom()
{
	AAngelCharacter::Zoom();
}

void AAngel_Dealer::CameraSwitch()
{
	AAngelCharacter::CameraSwitch();
}

// Move Character
void AAngel_Dealer::ForwardBack(float NewAxisValue)
{
	AAngelCharacter::ForwardBack(NewAxisValue);
}

void AAngel_Dealer::LeftRight(float NewAxisValue)
{
	AAngelCharacter::LeftRight(NewAxisValue);
}

// Rotate Character
void AAngel_Dealer::Turn(float NewAxisValue)
{
	AAngelCharacter::Turn(NewAxisValue);
}

void AAngel_Dealer::LookUp(float NewAxisValue)
{
	AAngelCharacter::LookUp(NewAxisValue);
}

// Fire
void AAngel_Dealer::StartFire()
{
	AAngelCharacter::StartFire();
}

void AAngel_Dealer::Fire()
{
	AAngelCharacter::Fire();

	if (nullptr == AnimAngel) return;
	AnimAngel->Angel_Dealer_Attack_Montage();
	//AnimAngel->AngelMotangeAttack();
}

void AAngel_Dealer::StopFire()
{
	AAngelCharacter::StopFire();
}

// Active
void AAngel_Dealer::Walk()
{
	AAngelCharacter::Walk();
}

void AAngel_Dealer::Stop_Walk()
{
	AAngelCharacter::Stop_Walk();
}

void AAngel_Dealer::ReloadFunc()
{
	AAngelCharacter::ReloadFunc();
}

void AAngel_Dealer::Stop_ReloadFunc()
{
	AAngelCharacter::Stop_ReloadFunc();
}

// Death
void AAngel_Dealer::Death()
{
	AAngelCharacter::Death();
}

void AAngel_Dealer::Respawn()
{
	AAngelCharacter::Respawn();
}

// Muzzle
FVector AAngel_Dealer::SetMuzzlePos()
{
	AAngelCharacter::SetMuzzlePos();
	return AnimAngel->Translation_Value;
}

FRotator AAngel_Dealer::SetMuzzleRot()
{
	AAngelCharacter::SetMuzzleRot();
	return AnimAngel->Rotate_Value * 2.0f;
}

// Install
void AAngel_Dealer::StartInstall()
{
	AAngelCharacter::StartInstall();
}

void AAngel_Dealer::Installing()
{
	AAngelCharacter::Installing();
}

void AAngel_Dealer::EndInstall()
{
	AAngelCharacter::EndInstall();
}
