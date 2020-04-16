#include "Human_Shielder.h"
#include "Anim_Human_Shielder.h"
#include "DrawDebugHelpers.h"

// 생성자에서 User 초기화
AHuman_Shielder::AHuman_Shielder()
{
	// Set Character Job
	CurrentCharJob = ECharacterJob::CLASS_TANKER;

	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonGideon/Characters/Heroes/Gideon/Meshes/Gideon.Gideon"));
	if (SK_SOUL_USER.Succeeded()) GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);
	
	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_SOUL_ANIM(TEXT("/Game/Project_Soul/BluePrint/BP_HumanShielder.BP_HumanShielder_C"));
	if (BP_SOUL_ANIM.Succeeded()) GetMesh()->SetAnimInstanceClass(BP_SOUL_ANIM.Class);
}

void AHuman_Shielder::BeginPlay()
{
	AHumanCharacter::BeginPlay();
	
	// Anim Setting
	AnimHuman = Cast<UAnim_Human_Shielder>(GetMesh()->GetAnimInstance());
	AnimParent = AnimHuman;

	// Skill Using Count
	Skill_Count = 5;
}

void AHuman_Shielder::Tick(float DeltaTime)
{
	AHumanCharacter::Tick(DeltaTime);
}

void AHuman_Shielder::PostInitializeComponents()
{
	AHumanCharacter::PostInitializeComponents();
	Super::PostInitializeComponents();
}

void AHuman_Shielder::PossessedBy(AController* NewController)
{
	AHumanCharacter::PossessedBy(NewController);
	Super::PossessedBy(NewController);
}

// Input Key
void AHuman_Shielder::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	AHumanCharacter::SetupPlayerInputComponent(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 카메라
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &AHuman_Shielder::Zoom);
	PlayerInputComponent->BindAction(TEXT("CameraSwitch"), IE_Pressed, this, &AHuman_Shielder::CameraSwitch);

	// 스킬 사용
	PlayerInputComponent->BindAction(TEXT("UseSkill"), IE_Pressed, this, &AHuman_Shielder::UseSkillFunc);

	// 상호작용
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Pressed, this, &AHuman_Shielder::StartCollect);
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Repeat, this, &AHuman_Shielder::Collecting);
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Released, this, &AHuman_Shielder::EndCollect);
}

// Set Camera
void AHuman_Shielder::SetControlMode(EControlMode NewControlMode)
{
	AHumanCharacter::SetControlMode(NewControlMode);
}

void AHuman_Shielder::Zoom()
{
	AHumanCharacter::Zoom();
}

void AHuman_Shielder::CameraSwitch()
{
	AHumanCharacter::CameraSwitch();
}

// Move Character
void AHuman_Shielder::ForwardBack(float NewAxisValue)
{
	AHumanCharacter::ForwardBack(NewAxisValue);
}

void AHuman_Shielder::LeftRight(float NewAxisValue)
{
	AHumanCharacter::LeftRight(NewAxisValue);
}

// Rotate Character
void AHuman_Shielder::Turn(float NewAxisValue)
{
	AHumanCharacter::Turn(NewAxisValue);
}

void AHuman_Shielder::LookUp(float NewAxisValue)
{
	AHumanCharacter::LookUp(NewAxisValue);
}

// Fire
void AHuman_Shielder::StartFire()
{
	AHumanCharacter::StartFire();
}

void AHuman_Shielder::Fire()
{
	AHumanCharacter::Fire();
	if (AnimParent->IsFire == true)
	{
		if (nullptr == AnimHuman) return;
		AnimHuman->Human_Shielder_AttackMontage();
	}
}

void AHuman_Shielder::StopFire()
{
	AHumanCharacter::StopFire();
}

// Active
void AHuman_Shielder::Walk()
{
	AHumanCharacter::Walk();
}

void AHuman_Shielder::Stop_Walk()
{
	AHumanCharacter::Stop_Walk();
}

void AHuman_Shielder::ReloadFunc()
{
	AHumanCharacter::ReloadFunc();
}

void AHuman_Shielder::Stop_ReloadFunc()
{
	AHumanCharacter::Stop_ReloadFunc();
}

// Death
void AHuman_Shielder::Death()
{
	AHumanCharacter::Death();
}

void AHuman_Shielder::Respawn()
{
	AHumanCharacter::Respawn();
}

// Muzzle
FVector AHuman_Shielder::SetMuzzlePos()
{
	AHumanCharacter::SetMuzzlePos();
	return AnimHuman->Translation_Value;
}

FRotator AHuman_Shielder::SetMuzzleRot()
{
	AHumanCharacter::EndCollect();
	return AnimHuman->Rotate_Value * 2.0f;
}

// Install
void AHuman_Shielder::StartCollect()
{
	AHumanCharacter::EndCollect();
}

void AHuman_Shielder::Collecting()
{
	AHumanCharacter::EndCollect();
}

void AHuman_Shielder::EndCollect()
{
	AHumanCharacter::EndCollect();
}

// Collect Progress Bar
float AHuman_Shielder::GetPerCollect()
{
	AHumanCharacter::GetPerCollect();
	return 0.0f;
}

// Skill
void AHuman_Shielder::UseSkillFunc()
{
	//if (Activate_Skill == true)
	//{
	//	if (Skill_Count <= 0)
	//	{
	//		// 스킬 활성화 초기화
	//		Skill_Count = 5;
	//		Activate_Skill = false;
	//		CurrentSP = 0;			
	//	}
	//
	//	// 스킬 사용
	//
	//}


	// 스킬 사용
	Skill_ForwardVector = FVector::ZeroVector;
	Skill_StartVector = GetMesh()->GetComponentLocation() + FVector(0.0f, 0.0f, 120.0f);

	if (CurrentBlinkDir_PosX == EBlinkDirect_PosX::BLINK_DIR_FORWARD)
		Skill_ForwardVector += (GetMesh()->GetRightVector()*1000.0f);
	else if (CurrentBlinkDir_PosX == EBlinkDirect_PosX::BLINK_DIR_BACK)
		Skill_ForwardVector -= (GetMesh()->GetRightVector()*1000.0f);

	if (CurrentBlinkDir_PosZ == EBlinkDirect_PosZ::BLINK_DIR_RIGHT)
		Skill_ForwardVector += (GetMesh()->GetForwardVector()*1000.0f);
	else if (CurrentBlinkDir_PosZ == EBlinkDirect_PosZ::BLINK_DIR_LEFT)
		Skill_ForwardVector -= (GetMesh()->GetForwardVector()*1000.0f);

	Skill_EndVector = Skill_StartVector + Skill_ForwardVector;

	DrawDebugLine(GetWorld(), Skill_StartVector, Skill_EndVector, FColor::Green, true);
	Skill_isHit = GetWorld()->LineTraceSingleByChannel(Skill_OutHit, Skill_StartVector, Skill_EndVector, ECC_Visibility, Skill_CollisionParams);

	if (Skill_isHit) SetActorLocation(Skill_OutHit.Location, false, nullptr, ETeleportType::TeleportPhysics);
	else SetActorLocation(Skill_EndVector, false, nullptr, ETeleportType::TeleportPhysics);
}