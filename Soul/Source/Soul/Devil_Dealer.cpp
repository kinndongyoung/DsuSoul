#include "Devil_Dealer.h"
#include "Anim_Devil_Dealer.h"

// 생성자에서 User 초기화
ADevil_Dealer::ADevil_Dealer()
{
	// Set Character Job
	CurrentCharJob = ECharacterJob::CLASS_DEALER;

	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonRevenant/Characters/Heroes/Revenant/Skins/RavenQuill/Meshes/Revenant_RavenQuill.Revenant_RavenQuill"));
	if (SK_SOUL_USER.Succeeded()) GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);
	
	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_DEVILCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_DevilDealer.BP_DevilDealer_C"));
	if (BP_ANIM_DEVILCHAR.Succeeded()) GetMesh()->SetAnimInstanceClass(BP_ANIM_DEVILCHAR.Class);
}

void ADevil_Dealer::BeginPlay()
{
	ADevilCharacter::BeginPlay();

	// Anim Setting
	AnimDevil = Cast<UAnim_Devil_Dealer>(GetMesh()->GetAnimInstance());
	AnimParent = AnimDevil;
}

void ADevil_Dealer::Tick(float DeltaTime)
{
	ADevilCharacter::Tick(DeltaTime);
}

void ADevil_Dealer::PostInitializeComponents()
{
	ADevilCharacter::PostInitializeComponents();
	Super::PostInitializeComponents();
}

void ADevil_Dealer::PossessedBy(AController* NewController)
{
	ADevilCharacter::PossessedBy(NewController);
	Super::PossessedBy(NewController);
}

// Input Key
void ADevil_Dealer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	ADevilCharacter::SetupPlayerInputComponent(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 카메라
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &ADevil_Dealer::Zoom);
	PlayerInputComponent->BindAction(TEXT("CameraSwitch"), IE_Pressed, this, &ADevil_Dealer::CameraSwitch);
}

// Set Camera
void ADevil_Dealer::SetControlMode(EControlMode NewControlMode)
{
	ADevilCharacter::SetControlMode(NewControlMode);
}

void ADevil_Dealer::Zoom()
{
	ADevilCharacter::Zoom();
}

void ADevil_Dealer::CameraSwitch()
{
	ADevilCharacter::CameraSwitch();
}

// Move Character
void ADevil_Dealer::ForwardBack(float NewAxisValue)
{
	ADevilCharacter::ForwardBack(NewAxisValue);

	if (NewAxisValue < 0)
	{
		AnimDevil->Is_Back_Walk = true;
	}
	else AnimDevil->Is_Back_Walk = false;
}

void ADevil_Dealer::LeftRight(float NewAxisValue)
{
	ADevilCharacter::LeftRight(NewAxisValue);
}

// Rotate Character
void ADevil_Dealer::Turn(float NewAxisValue)
{
	ADevilCharacter::Turn(NewAxisValue);
}

void ADevil_Dealer::LookUp(float NewAxisValue)
{
	ADevilCharacter::LookUp(NewAxisValue);
}

// Fire
void ADevil_Dealer::StartFire()
{
	ADevilCharacter::StartFire();
}

void ADevil_Dealer::Fire()
{
	ADevilCharacter::Fire();

	if (nullptr == AnimDevil) return;
	AnimDevil->DevilDealerAttack();
}

void ADevil_Dealer::StopFire()
{
	ADevilCharacter::StopFire();
}

// Active
void ADevil_Dealer::Walk()
{
	ADevilCharacter::Walk();
}

void ADevil_Dealer::Stop_Walk()
{
	ADevilCharacter::Stop_Walk();
}

void ADevil_Dealer::ReloadFunc()
{
	ADevilCharacter::ReloadFunc();
}

void ADevil_Dealer::Stop_ReloadFunc()
{
	ADevilCharacter::Stop_ReloadFunc();
}

// Death
void ADevil_Dealer::Death()
{
	ADevilCharacter::Death();
}

void ADevil_Dealer::Respawn()
{
	ADevilCharacter::Respawn();
}

// Muzzle
FVector ADevil_Dealer::SetMuzzlePos()
{
	ADevilCharacter::SetMuzzlePos();
	return AnimDevil->Translation_Value;
}

FRotator ADevil_Dealer::SetMuzzleRot()
{
	ADevilCharacter::SetMuzzleRot();
	return AnimDevil->Rotate_Value * 2.0f;
}

// Combo
void ADevil_Dealer::DevilAttackStart()
{
	ADevilCharacter::DevilAttackStart();
}

void ADevil_Dealer::DevilAttackEnd()
{
	ADevilCharacter::DevilAttackEnd();
}

void ADevil_Dealer::OnAttackMontageEnd(UAnimMontage* Montage, bool bInterrupted)
{
	ADevilCharacter::OnAttackMontageEnd(Montage, bInterrupted);
}