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
	UserCameraArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 310.0f), FRotator(-30.0f, 0.0f, 0.0f));

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

	// TPS Setting
	WidgetClass_Bar_TPS->SetWidgetSpace(EWidgetSpace::World);
	WidgetClass_Bar_TPS->SetPivot(FVector2D(0.0f, 2.0f));
	WidgetClass_Bar_TPS->SetWorldScale3D(FVector(0.2f, 0.2f, 0.2f));
	WidgetClass_Bar_TPS->SetRelativeLocationAndRotation(FVector(-40.0f, 10.0f, -10.0f), FRotator(0.0f, -90.0f, 0.0f));

	// Anim Setting
	AnimDevil = Cast<UDevilAnimInstance>(GetMesh()->GetAnimInstance());
	AnimParent = AnimDevil;

	// Install Value Init
	MuzzleOffset = FVector(50.0f, 5.0f, 75.0f);

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

	// 카메라 관련
	UserCameraArm->TargetArmLength = FMath::FInterpTo(UserCameraArm->TargetArmLength, ArmLengthTo, DeltaTime, ArmLengthSpeed);

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

	// 인칭 전환
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &ADevilCharacter::Zoom);
}

// Set Camera Arm
void ADevilCharacter::SetControlMode(EControlMode NewControlMode)
{
	CurrentControlMode = NewControlMode;

	switch (CurrentControlMode)
	{
		case EControlMode::TPS:
		{
			ArmLengthTo = 300.0f;
			Camera->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -50.0f), FRotator(-15.0f, 0.0f, 0.0f));
			UserCameraArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 310.0f), FRotator(-30.0f, 0.0f, 0.0f));
		}break;
		case EControlMode::FPS:
		{
			ArmLengthTo = 0.0f;
			Camera->SetRelativeLocationAndRotation(FVector(5.0f, 5.0f, 78.0f), FRotator(0.0f, 0.0f, 0.0f));
			UserCameraArm->SetRelativeLocation(FVector(0.0f, 0.0f, 88.0f));
		}break;
	}
	ACharacter_Parent::SetControlMode(NewControlMode);
}

// Move Character
void ADevilCharacter::ForwardBack(float NewAxisValue)
{
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
void ADevilCharacter::Zoom()
{
	if (Is_Zoom == false)
	{
		HUDDevil->CrossHair_State = true;
		SetControlMode(EControlMode::FPS);
		WidgetClass_Bar_TPS->SetRelativeLocation(FVector(-40.0f, 10.0f, -1000.0f));
	}
	else if (Is_Zoom == true)
	{
		HUDDevil->CrossHair_State = false;
		SetControlMode(EControlMode::TPS);
		WidgetClass_Bar_TPS->SetRelativeLocation(FVector(-40.0f, 10.0f, -10.0f));
	}

	ACharacter_Parent::Zoom();
	HUDDevil->HUD_HPSP();
}
void ADevilCharacter::StartFire()
{
	ACharacter_Parent::StartFire();
}

void ADevilCharacter::Fire()
{
	ACharacter_Parent::Fire();
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