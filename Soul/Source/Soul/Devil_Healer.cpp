#include "Devil_Healer.h"
#include "Anim_Devil_Healer.h"

// 생성자에서 User 초기화
ADevil_Healer::ADevil_Healer()
{
	// Set Character Job
	CurrentCharJob = ECharacterJob::CLASS_HEALER;

	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonMorigesh/Characters/Heroes/Morigesh/Skins/DarkHeart/Meshes/Morigesh_DarkHeart.Morigesh_DarkHeart"));
	if (SK_SOUL_USER.Succeeded()) GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);

	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_DEVILCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_DevilHealer.BP_DevilHealer_C"));
	if (BP_ANIM_DEVILCHAR.Succeeded()) GetMesh()->SetAnimInstanceClass(BP_ANIM_DEVILCHAR.Class);
}

void ADevil_Healer::BeginPlay()
{
	ADevilCharacter::BeginPlay();

	// Anim Setting
	AnimDevil = Cast<UAnim_Devil_Healer>(GetMesh()->GetAnimInstance());
	AnimParent = AnimDevil;
}

void ADevil_Healer::Tick(float DeltaTime)
{
	ADevilCharacter::Tick(DeltaTime);
}

void ADevil_Healer::PostInitializeComponents()
{
	ADevilCharacter::PostInitializeComponents();
	Super::PostInitializeComponents();
}

void ADevil_Healer::PossessedBy(AController* NewController)
{
	ADevilCharacter::PossessedBy(NewController);
	Super::PossessedBy(NewController);
}

// Input Key
void ADevil_Healer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	ADevilCharacter::SetupPlayerInputComponent(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 카메라
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &ADevil_Healer::Zoom);
	PlayerInputComponent->BindAction(TEXT("CameraSwitch"), IE_Pressed, this, &ADevil_Healer::CameraSwitch);
}

// Set Camera
void ADevil_Healer::SetControlMode(EControlMode NewControlMode)
{
	ADevilCharacter::SetControlMode(NewControlMode);
}

void ADevil_Healer::Zoom()
{
	ADevilCharacter::Zoom();
}

void ADevil_Healer::CameraSwitch()
{
	ADevilCharacter::CameraSwitch();
}

// Move Character
void ADevil_Healer::ForwardBack(float NewAxisValue)
{
	ADevilCharacter::ForwardBack(NewAxisValue);

	if (NewAxisValue < 0)
	{
		AnimDevil->Is_Back_Walk = true;
	}
	else AnimDevil->Is_Back_Walk = false;
}

void ADevil_Healer::LeftRight(float NewAxisValue)
{
	ADevilCharacter::LeftRight(NewAxisValue);
}

// Rotate Character
void ADevil_Healer::Turn(float NewAxisValue)
{
	ADevilCharacter::Turn(NewAxisValue);
}

void ADevil_Healer::LookUp(float NewAxisValue)
{
	ADevilCharacter::LookUp(NewAxisValue);
}

// Fire
void ADevil_Healer::StartFire()
{
	ADevilCharacter::StartFire();
}

void ADevil_Healer::Fire()
{
	ADevilCharacter::Fire();

	if (IsAtttacking)
	{
		ABCHECK(FMath::IsWithinInclusive<int32>(CurrentCombo, 1, MaxCombo));
		if (CanNextCombo)
		{
			IsComboInputOn = true;
		}
	}
	else
	{
		ABCHECK(CurrentCombo == 0);
		DevilAttackStart();
		//AnimDevil->DevilAttackMontage();
		//AnimDevil->JumpToAttackMontage(CurrentCombo);
		IsAtttacking = true;
	}
}

void ADevil_Healer::StopFire()
{
	ADevilCharacter::StopFire();
}

// Active
void ADevil_Healer::Walk()
{
	ADevilCharacter::Walk();
}

void ADevil_Healer::Stop_Walk()
{
	ADevilCharacter::Stop_Walk();
}

void ADevil_Healer::ReloadFunc()
{
	ADevilCharacter::ReloadFunc();
}

void ADevil_Healer::Stop_ReloadFunc()
{
	ADevilCharacter::Stop_ReloadFunc();
}

// Death
void ADevil_Healer::Death()
{
	ADevilCharacter::Death();
}

void ADevil_Healer::Respawn()
{
	ADevilCharacter::Respawn();
}

// Muzzle
FVector ADevil_Healer::SetMuzzlePos()
{
	ADevilCharacter::SetMuzzlePos();
	return AnimDevil->Translation_Value;
}

FRotator ADevil_Healer::SetMuzzleRot()
{
	ADevilCharacter::SetMuzzleRot();
	return AnimDevil->Rotate_Value * 2.0f;
}

// Combo
void ADevil_Healer::DevilAttackStart()
{
	ADevilCharacter::DevilAttackStart();
}

void ADevil_Healer::DevilAttackEnd()
{
	ADevilCharacter::DevilAttackEnd();
}

void ADevil_Healer::OnAttackMontageEnd(UAnimMontage* Montage, bool bInterrupted)
{
	ADevilCharacter::OnAttackMontageEnd(Montage, bInterrupted);
}