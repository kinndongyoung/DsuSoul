#include "Devil_Shielder.h"
#include "Anim_Devil_Shielder.h"

// 생성자에서 User 초기화
ADevil_Shielder::ADevil_Shielder()
{
	// Set Character Job
	CurrentCharJob = ECharacterJob::CLASS_TANKER;

	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonSevarog/Characters/Heroes/Sevarog/Meshes/Sevarog.Sevarog"));
	if (SK_SOUL_USER.Succeeded()) GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);

	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_DEVILCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_DevilShielder.BP_DevilShielder_C"));
	if (BP_ANIM_DEVILCHAR.Succeeded()) GetMesh()->SetAnimInstanceClass(BP_ANIM_DEVILCHAR.Class);
}

void ADevil_Shielder::BeginPlay()
{
	ADevilCharacter::BeginPlay();

	// Anim Setting
	AnimDevil = Cast<UAnim_Devil_Shielder>(GetMesh()->GetAnimInstance());
	AnimParent = AnimDevil;
}

void ADevil_Shielder::Tick(float DeltaTime)
{
	ADevilCharacter::Tick(DeltaTime);
}

void ADevil_Shielder::PostInitializeComponents()
{
	ADevilCharacter::PostInitializeComponents();
	Super::PostInitializeComponents();
}

void ADevil_Shielder::PossessedBy(AController* NewController)
{
	ADevilCharacter::PossessedBy(NewController);
	Super::PossessedBy(NewController);
}

// Input Key
void ADevil_Shielder::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	ADevilCharacter::SetupPlayerInputComponent(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 카메라
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &ADevil_Shielder::Zoom);
	PlayerInputComponent->BindAction(TEXT("CameraSwitch"), IE_Pressed, this, &ADevil_Shielder::CameraSwitch);
}

// Set Camera
void ADevil_Shielder::SetControlMode(EControlMode NewControlMode)
{
	ADevilCharacter::SetControlMode(NewControlMode);
}

void ADevil_Shielder::Zoom()
{
	ADevilCharacter::Zoom();
}

void ADevil_Shielder::CameraSwitch()
{
	ADevilCharacter::CameraSwitch();
}

// Move Character
void ADevil_Shielder::ForwardBack(float NewAxisValue)
{
	ADevilCharacter::ForwardBack(NewAxisValue);

	if (NewAxisValue < 0)
	{
		AnimDevil->Is_Back_Walk = true;
	}
	else AnimDevil->Is_Back_Walk = false;
}

void ADevil_Shielder::LeftRight(float NewAxisValue)
{
	ADevilCharacter::LeftRight(NewAxisValue);
}

// Rotate Character
void ADevil_Shielder::Turn(float NewAxisValue)
{
	ADevilCharacter::Turn(NewAxisValue);
}

void ADevil_Shielder::LookUp(float NewAxisValue)
{
	ADevilCharacter::LookUp(NewAxisValue);
}

// Fire
void ADevil_Shielder::StartFire()
{
	ADevilCharacter::StartFire();
}

void ADevil_Shielder::Fire()
{
	ADevilCharacter::Fire();

	if (nullptr == AnimDevil) return;
	AnimDevil->DevilShielderAttack();
}

void ADevil_Shielder::StopFire()
{
	ADevilCharacter::StopFire();
}

// Active
void ADevil_Shielder::Walk()
{
	ADevilCharacter::Walk();
}

void ADevil_Shielder::Stop_Walk()
{
	ADevilCharacter::Stop_Walk();
}

void ADevil_Shielder::ReloadFunc()
{
	ADevilCharacter::ReloadFunc();
}

void ADevil_Shielder::Stop_ReloadFunc()
{
	ADevilCharacter::Stop_ReloadFunc();
}

// Death
void ADevil_Shielder::Death()
{
	ADevilCharacter::Death();
}

void ADevil_Shielder::Respawn()
{
	ADevilCharacter::Respawn();
}

// Muzzle
FVector ADevil_Shielder::SetMuzzlePos()
{
	ADevilCharacter::SetMuzzlePos();
	return AnimDevil->Translation_Value;
}

FRotator ADevil_Shielder::SetMuzzleRot()
{
	ADevilCharacter::SetMuzzleRot();
	return AnimDevil->Rotate_Value * 2.0f;
}

// Combo
void ADevil_Shielder::DevilAttackStart()
{
	ADevilCharacter::DevilAttackStart();
}

void ADevil_Shielder::DevilAttackEnd()
{
	ADevilCharacter::DevilAttackEnd();
}

void ADevil_Shielder::OnAttackMontageEnd(UAnimMontage* Montage, bool bInterrupted)
{
	ADevilCharacter::OnAttackMontageEnd(Montage, bInterrupted);
}