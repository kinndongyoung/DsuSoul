#include "Human_Dealer.h"
#include "Anim_Human_Dealer.h"

// 생성자에서 User 초기화
AHuman_Dealer::AHuman_Dealer()
{
	// Set Character Job
	CurrentCharJob = ECharacterJob::CLASS_DEALER;

	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonWraith/Characters/Heroes/Wraith/Meshes/Wraith.Wraith"));
	if (SK_SOUL_USER.Succeeded()) GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);

	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_SOUL_ANIM(TEXT("/Game/Project_Soul/BluePrint/BP_HumanDealer.BP_HumanDealer_C"));
	if (BP_SOUL_ANIM.Succeeded()) GetMesh()->SetAnimInstanceClass(BP_SOUL_ANIM.Class);
}

void AHuman_Dealer::BeginPlay()
{
	AHumanCharacter::BeginPlay();

	// Anim Setting
	AnimHuman = Cast<UAnim_Human_Dealer>(GetMesh()->GetAnimInstance());
	AnimParent = AnimHuman;
}

void AHuman_Dealer::Tick(float DeltaTime)
{
	AHumanCharacter::Tick(DeltaTime);
}

void AHuman_Dealer::PostInitializeComponents()
{
	AHumanCharacter::PostInitializeComponents();
	Super::PostInitializeComponents();
}

void AHuman_Dealer::PossessedBy(AController* NewController)
{
	AHumanCharacter::PossessedBy(NewController);
	Super::PossessedBy(NewController);
}

// Input Key
void AHuman_Dealer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	AHumanCharacter::SetupPlayerInputComponent(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 카메라
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &AHuman_Dealer::Zoom);
	PlayerInputComponent->BindAction(TEXT("CameraSwitch"), IE_Pressed, this, &AHuman_Dealer::CameraSwitch);

	// 상호작용
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Pressed, this, &AHuman_Dealer::StartCollect);
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Repeat, this, &AHuman_Dealer::Collecting);
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Released, this, &AHuman_Dealer::EndCollect);
}

// Set Camera
void AHuman_Dealer::SetControlMode(EControlMode NewControlMode)
{
	AHumanCharacter::SetControlMode(NewControlMode);
}

void AHuman_Dealer::Zoom()
{
	AHumanCharacter::Zoom();
}

void AHuman_Dealer::CameraSwitch()
{
	AHumanCharacter::CameraSwitch();
}

// Move Character
void AHuman_Dealer::ForwardBack(float NewAxisValue)
{
	AHumanCharacter::ForwardBack(NewAxisValue);
}

void AHuman_Dealer::LeftRight(float NewAxisValue)
{
	AHumanCharacter::LeftRight(NewAxisValue);
}

// Rotate Character
void AHuman_Dealer::Turn(float NewAxisValue)
{
	AHumanCharacter::Turn(NewAxisValue);
}

void AHuman_Dealer::LookUp(float NewAxisValue)
{
	AHumanCharacter::LookUp(NewAxisValue);
}

// Fire
void AHuman_Dealer::StartFire()
{
	AHumanCharacter::StartFire();
}

void AHuman_Dealer::Fire()
{
	AHumanCharacter::Fire();

	if (nullptr == AnimHuman) return;
	//AnimHuman->HumanMontageAttack();
}

void AHuman_Dealer::StopFire()
{
	AHumanCharacter::StopFire();
}

// Active
void AHuman_Dealer::Walk()
{
	AHumanCharacter::Walk();
}

void AHuman_Dealer::Stop_Walk()
{
	AHumanCharacter::Stop_Walk();
}

void AHuman_Dealer::ReloadFunc()
{
	AHumanCharacter::ReloadFunc();
}

void AHuman_Dealer::Stop_ReloadFunc()
{
	AHumanCharacter::Stop_ReloadFunc();
}

// Death
void AHuman_Dealer::Death()
{
	AHumanCharacter::Death();
}

void AHuman_Dealer::Respawn()
{
	AHumanCharacter::Respawn();
}

// Muzzle
FVector AHuman_Dealer::SetMuzzlePos()
{
	AHumanCharacter::SetMuzzlePos();
	return AnimHuman->Translation_Value;
}

FRotator AHuman_Dealer::SetMuzzleRot()
{
	AHumanCharacter::EndCollect();
	return AnimHuman->Rotate_Value * 2.0f;
}

// Install
void AHuman_Dealer::StartCollect()
{
	AHumanCharacter::EndCollect();
}

void AHuman_Dealer::Collecting()
{
	AHumanCharacter::EndCollect();
}

void AHuman_Dealer::EndCollect()
{
	AHumanCharacter::EndCollect();
}

// Collect Progress Bar
float AHuman_Dealer::GetPerCollect()
{
	AHumanCharacter::GetPerCollect();
	return 0.0f;
}