#include "DevilCharacter.h"
#include "HUD_Devil.h"
#include "DevilAnimInstance.h"
#include "DevilWeaponBullet.h"
#include "Components/WidgetComponent.h"

// 생성자에서 User 초기화
ADevilCharacter::ADevilCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// Add Tag
	Tags.AddUnique(TEXT("Devil_Character"));

	// Camera Attachment
	UserCameraArm->SetupAttachment(GetMesh());
	Camera->SetupAttachment(UserCameraArm);
	WidgetClass_Bar_TPS->SetupAttachment(GetMesh());

	// Set Mesh, Camera
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	UserCameraArm->TargetArmLength = 300.0f;
	UserCameraArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 100.0f), FRotator(0.0f, 0.0f, 0.0f));
	Camera->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -80.0f), FRotator(0.0f, 0.0f, 0.0f));

	// Set Property
	GetMesh()->CanCharacterStepUp(false);
	GetCapsuleComponent()->CanCharacterStepUp(false);
	GetMesh()->BodyInstance.SetCollisionProfileName(TEXT("DevilChar"));
	GetCapsuleComponent()->BodyInstance.SetCollisionProfileName(TEXT("DevilChar"));

	// Control
	SetControlMode(EControlMode::TPS);

	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonCountess/Characters/Heroes/Countess/Meshes/SM_Countess.SM_Countess"));
	if (SK_SOUL_USER.Succeeded()) GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);
	
	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_DEVILCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_DevilChar.BP_DevilChar_C"));
	if (BP_ANIM_DEVILCHAR.Succeeded()) GetMesh()->SetAnimInstanceClass(BP_ANIM_DEVILCHAR.Class);
	
	// Bullet BP Initialize
	static ConstructorHelpers::FObjectFinder<UBlueprint> BP_SOUL_WEAPON_BULLET(TEXT("/Game/Project_Soul/BluePrint/BP_DevilWeaponBullet.BP_DevilWeaponBullet"));
	if (BP_SOUL_WEAPON_BULLET.Succeeded()) ACharacter_Parent::WeaponBulletClass = BP_SOUL_WEAPON_BULLET.Object->GeneratedClass;
}

void ADevilCharacter::BeginPlay()
{
	ACharacter_Parent::BeginPlay();
	Super::BeginPlay();

	// Set Property
	GetMesh()->CanCharacterStepUp(false);
	GetCapsuleComponent()->CanCharacterStepUp(false);
	GetMesh()->BodyInstance.SetCollisionProfileName(TEXT("DevilChar"));
	GetCapsuleComponent()->BodyInstance.SetCollisionProfileName(TEXT("DevilChar"));

	// HUD Setting
	HUDDevil = Cast<AHUD_Devil>(GetWorld()->GetFirstPlayerController()->GetHUD());
	HUDParent = HUDDevil;

	// Anim Setting
	AnimDevil = Cast<UDevilAnimInstance>(GetMesh()->GetAnimInstance());
	AnimParent = AnimDevil;

	// Install Value Init
	MuzzleOffset = FVector(50.0f, 5.0f, 75.0f);

	// Devil Combo Motion
	IsAtttacking = false;
	MaxCombo = 3;
	DevilAttackEnd();

	//vec.X = 5500;
	//vec.Y = 3000;
	//vec.Z = 300;
	//GetTransform().TransformFVector4(vec);
	//GetActorTransform().SetTranslation(vec);
	//SetActorLocation(vec);
}

void ADevilCharacter::Tick(float DeltaTime)
{
	ACharacter_Parent::Tick(DeltaTime);
	Super::Tick(DeltaTime);

	// HUD Update
	HUDDevil->HUD_Update();

	// HP 및 SP 관련
	UpdateCurrentHP();
	UpdateCurrentSP();

	if (CurrentHp <= 0) Death();

	FTransform tr = GetTransform();
	if (tr.GetTranslation().Z <= -110) CurrentHp -= 3;
}

void ADevilCharacter::PostInitializeComponents()
{
	ACharacter_Parent::PostInitializeComponents();
	Super::PostInitializeComponents();
}

void ADevilCharacter::PossessedBy(AController* NewController)
{
	ACharacter_Parent::PossessedBy(NewController);
	Super::PossessedBy(NewController);
}

// Input Key
void ADevilCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	ACharacter_Parent::SetupPlayerInputComponent(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 카메라
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &ADevilCharacter::Zoom);
	PlayerInputComponent->BindAction(TEXT("CameraSwitch"), IE_Pressed, this, &ADevilCharacter::CameraSwitch);
}

// Set Camera
void ADevilCharacter::SetControlMode(EControlMode NewControlMode)
{
	CurrentControlMode = NewControlMode;

	switch (CurrentControlMode)
	{
		case EControlMode::TPS:
		{
			ArmLengthTo = 300.0f;
			Camera->SetRelativeLocation(FVector(-100.0f, 0.0f, 150.0f));
		}break;
		case EControlMode::FPS:
		{
			ArmLengthTo = 150.0f;
			Camera->SetRelativeLocation(FVector(0.0f, 100.0f, 80.0f));
		}break;
	}
	ACharacter_Parent::SetControlMode(NewControlMode);
}

void ADevilCharacter::Zoom()
{
	ACharacter_Parent::Zoom();
	HUDDevil->HUD_HPSP();
}

void ADevilCharacter::CameraSwitch()
{
	if (CurrentControlMode == EControlMode::FPS)
	{
		switch (CurrentCameraMode)
		{
			case ECameraMode::ZOOM_LEFT:
			{
				ArmLengthTo = 150.0f;
				Camera->SetRelativeLocation(FVector(0.0f, 100.0f, 80.0f));
				WidgetClass_Bar_TPS->SetRelativeLocation(FVector(-45.0f, 10.0f, 100.0f));
			}break;
			case ECameraMode::ZOOM_RIGHT:
			{
				ArmLengthTo = 0.0f;
				Camera->SetRelativeLocation(FVector(-150.0f, -100.0f, 80.0f));
				WidgetClass_Bar_TPS->SetRelativeLocation(FVector(90.0f, 10.0f, 105.0f));
			}break;
			case ECameraMode::ZOOM_LEFT:
			{
				ArmLengthTo = 150.0f;
				Camera->SetRelativeLocation(FVector(0.0f, 100.0f, 80.0f));
				WidgetClass_Bar_TPS->SetRelativeLocation(FVector(-45.0f, 10.0f, 100.0f));
			}break;
			case ECameraMode::ZOOM_RIGHT:
			{
				ArmLengthTo = 0.0f;
				Camera->SetRelativeLocation(FVector(-150.0f, -100.0f, 80.0f));
				WidgetClass_Bar_TPS->SetRelativeLocation(FVector(90.0f, 10.0f, 105.0f));
			}break;
		}
		ACharacter_Parent::CameraSwitch();
	}
}

// Move Character
void ADevilCharacter::ForwardBack(float NewAxisValue)
{
	ACharacter_Parent::ForwardBack(NewAxisValue);

	if (NewAxisValue < 0)
	{
		AnimDevil->Is_Back_Walk = true;
	}
	else AnimDevil->Is_Back_Walk = false;
	ACharacter_Parent::ForwardBack(NewAxisValue);
}

void ADevilCharacter::LeftRight(float NewAxisValue)
{
	ACharacter_Parent::LeftRight(NewAxisValue);
}

// Rotate Character
void ADevilCharacter::Turn(float NewAxisValue)
{
	ACharacter_Parent::Turn(NewAxisValue);
}

void ADevilCharacter::LookUp(float NewAxisValue)
{
	ACharacter_Parent::LookUp(NewAxisValue);
}

// Fire
void ADevilCharacter::StartFire()
{
	ACharacter_Parent::StartFire();
}

void ADevilCharacter::Fire()
{
	ACharacter_Parent::Fire();

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
		AnimDevil->DevilAttackMontage();
		AnimDevil->JumpToAttackMontage(CurrentCombo);
		IsAtttacking = true;
	}
}

void ADevilCharacter::StopFire()
{
	ACharacter_Parent::StopFire();
}

// Active
void ADevilCharacter::Walk()
{
	ACharacter_Parent::Walk();
}

void ADevilCharacter::Stop_Walk()
{
	ACharacter_Parent::Stop_Walk();
}

void ADevilCharacter::ReloadFunc()
{
	ACharacter_Parent::ReloadFunc();
}

void ADevilCharacter::Stop_ReloadFunc()
{
	ACharacter_Parent::Stop_ReloadFunc();
}

// Death
void ADevilCharacter::Death()
{
	ACharacter_Parent::Death();

	HUDDevil->Death_bar = true;
	HUDDevil->HUD_Respawn();
	Is_Zoom = true;

	if (DeathTime <= RespawnTime)
		ACharacter_Parent::Respawn();
}

void ADevilCharacter::Respawn()
{
	ACharacter_Parent::Respawn();

	HUDDevil->Death_bar = false;
	RespawnTime = 0.0f;
}

// Muzzle
FVector ADevilCharacter::SetMuzzlePos()
{
	return AnimDevil->Translation_Value;
}

FRotator ADevilCharacter::SetMuzzleRot()
{
	return AnimDevil->Rotate_Value * 2.0f;
}

// Combo
void ADevilCharacter::DevilAttackStart()
{
	ABLOG_S(Warning);
	CanNextCombo = true;
	IsComboInputOn = false;
	ABCHECK(FMath::IsWithinInclusive<int32>(CurrentCombo, 0, MaxCombo - 1));
	CurrentCombo = FMath::Clamp<int32>(CurrentCombo + 1, 1, MaxCombo);
}

void ADevilCharacter::DevilAttackEnd()
{
	ABLOG_S(Warning);
	IsComboInputOn = false;
	CanNextCombo = false;
	CurrentCombo = 0;
}

void ADevilCharacter::OnAttackMontageEnd(UAnimMontage* Montage, bool bInterrupted)
{
	ABCHECK(IsAtttacking);
	ABCHECK(CurrentCombo > 0);
	IsAtttacking = false;
	DevilAttackEnd();
}