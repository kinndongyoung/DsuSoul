#include "AngelCharacter.h"
#include "HUD_Angel.h"
#include "AngelAnimInstance.h"
#include "DevilWeaponBullet.h"
#include "Angel_InstallTrigger.h"
#include "Components/WidgetComponent.h"

// 생성자에서 User 초기화
AAngelCharacter::AAngelCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// Add Tag
	Tags.AddUnique(TEXT("Angel_Character"));

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
	GetMesh()->BodyInstance.SetCollisionProfileName(TEXT("HumanChar"));
	GetCapsuleComponent()->BodyInstance.SetCollisionProfileName(TEXT("HumanChar"));

	// Control
	SetControlMode(EControlMode::TPS);

	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/ParagonSerath/Characters/Heroes/Serath/Meshes/Serath.Serath"));
	if (SK_SOUL_USER.Succeeded()) GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);

	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_HUMANCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_AngelChar.BP_AngelChar_C"));
	if (BP_ANIM_HUMANCHAR.Succeeded()) GetMesh()->SetAnimInstanceClass(BP_ANIM_HUMANCHAR.Class);

	// Bullet BP Initialize
	static ConstructorHelpers::FObjectFinder<UBlueprint> BP_SOUL_WEAPON_BULLET(TEXT("/Game/Project_Soul/BluePrint/BP_DevilWeaponBullet.BP_DevilWeaponBullet"));
	if (BP_SOUL_WEAPON_BULLET.Succeeded()) ACharacter_Parent::WeaponBulletClass = BP_SOUL_WEAPON_BULLET.Object->GeneratedClass;
}

void AAngelCharacter::BeginPlay()
{
	ACharacter_Parent::BeginPlay();
	Super::BeginPlay();

	// Set Property
	GetMesh()->CanCharacterStepUp(false);
	GetCapsuleComponent()->CanCharacterStepUp(false);
	GetMesh()->BodyInstance.SetCollisionProfileName(TEXT("AngelChar"));
	GetCapsuleComponent()->BodyInstance.SetCollisionProfileName(TEXT("AngelChar"));

	// HUD Setting
	HUDAngel = Cast<AHUD_Angel>(GetWorld()->GetFirstPlayerController()->GetHUD());
	HUDParent = HUDAngel;

	// Anim Setting
	AnimAngel = Cast<UAngelAnimInstance>(GetMesh()->GetAnimInstance());
	AnimParent = AnimAngel;

	// Status
	DieState = false;

	// Install Value Init
	MuzzleOffset = FVector(50.0f, 5.0f, 75.0f);
	InstallCount = 5;
	PerInstall = 0.0f;
	isTrigger = false;

	//vec.X = 5500;
	//vec.Y = 3000;
	//vec.Z = 300;
	//GetTransform().TransformFVector4(vec);
	//GetActorTransform().SetTranslation(vec);
	//SetActorLocation(vec);
}

void AAngelCharacter::Tick(float DeltaTime)
{
	ACharacter_Parent::Tick(DeltaTime);
	Super::Tick(DeltaTime);

	// HUD Update
	HUDAngel->HUD_Update(PerInstall);

	// HP 및 SP 관련
	UpdateCurrentHP();
	UpdateCurrentSP();

	if (CurrentHp <= 0) Death();

	FTransform tr = GetTransform();
	if (tr.GetTranslation().Z <= -110) CurrentHp -= 3;
}

void AAngelCharacter::PostInitializeComponents()
{
	ACharacter_Parent::PostInitializeComponents();
	Super::PostInitializeComponents();
}

void AAngelCharacter::PossessedBy(AController* NewController)
{
	ACharacter_Parent::PossessedBy(NewController);
	Super::PossessedBy(NewController);
}

// Input Key
void AAngelCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	ACharacter_Parent::SetupPlayerInputComponent(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 카메라
	PlayerInputComponent->BindAction(TEXT("Zoom"), IE_Pressed, this, &AAngelCharacter::Zoom);
	PlayerInputComponent->BindAction(TEXT("CameraSwitch"), IE_Pressed, this, &AAngelCharacter::CameraSwitch);

	// 상호작용
	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Pressed, this, &AAngelCharacter::StartInstall);
	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Repeat, this, &AAngelCharacter::Installing);
	PlayerInputComponent->BindAction(TEXT("InterAction"), EInputEvent::IE_Released, this, &AAngelCharacter::EndInstall);
}

// Set Camera
void AAngelCharacter::SetControlMode(EControlMode NewControlMode)
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

void AAngelCharacter::Zoom()
{
	ACharacter_Parent::Zoom();
	HUDAngel->HUD_HPSP();
}

void AAngelCharacter::CameraSwitch()
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
		}
		ACharacter_Parent::CameraSwitch();
	}
}

// Move Character
void AAngelCharacter::ForwardBack(float NewAxisValue)
{
	ACharacter_Parent::ForwardBack(NewAxisValue);
}

void AAngelCharacter::LeftRight(float NewAxisValue)
{
	ACharacter_Parent::LeftRight(NewAxisValue);
}

// Rotate Character
void AAngelCharacter::Turn(float NewAxisValue)
{
	ACharacter_Parent::Turn(NewAxisValue);
}

void AAngelCharacter::LookUp(float NewAxisValue)
{
	ACharacter_Parent::LookUp(NewAxisValue);
}

// Fire
void AAngelCharacter::StartFire()
{
	ACharacter_Parent::StartFire();
}

void AAngelCharacter::Fire()
{
	ACharacter_Parent::Fire();
}

void AAngelCharacter::StopFire()
{
	ACharacter_Parent::StopFire();
}

// Active
void AAngelCharacter::Walk()
{
	ACharacter_Parent::Walk();
}

void AAngelCharacter::Stop_Walk()
{
	ACharacter_Parent::Stop_Walk();
}

void AAngelCharacter::ReloadFunc()
{
	ACharacter_Parent::ReloadFunc();
}

void AAngelCharacter::Stop_ReloadFunc()
{
	ACharacter_Parent::Stop_ReloadFunc();
}

// Death
void AAngelCharacter::Death()
{
	ACharacter_Parent::Death();

	HUDAngel->Death_bar = true;
	HUDAngel->HUD_Respawn();
	Is_Zoom = true;

	if (DeathTime <= RespawnTime)
		ACharacter_Parent::Respawn();
}

void AAngelCharacter::Respawn()
{
	ACharacter_Parent::Respawn();

	HUDAngel->Death_bar = false;
	RespawnTime = 0.0f;
}

// Muzzle
FVector AAngelCharacter::SetMuzzlePos()
{
	return AnimAngel->Translation_Value;
}

FRotator AAngelCharacter::SetMuzzleRot()
{
	return AnimAngel->Rotate_Value * 2.0f;
}

// Install
void AAngelCharacter::StartInstall()
{
	if (isTrigger == true && pt_Trigger->InstallState == true)
	{
		if (PerInstall <= 1.0f && InstallCount > 0)
		{
			print("StartInstall");
			printf("Install : %f", pt_Trigger->InstallProcess);

			pt_Trigger->InstallProcess += 0.01f;
			PerInstall = pt_Trigger->InstallProcess;
			
			HUDAngel->Angel_Install_State = true;
			HUDAngel->HUD_Update(pt_Trigger->InstallProcess);
		}
	}
	else print("StartInstall false");
}

void AAngelCharacter::Installing()
{
	if (isTrigger == true && pt_Trigger->InstallState == true)
	{
		if (PerInstall <= 1.0f && InstallCount > 0)
		{
			print("Installing");
			printf("Install : %f", pt_Trigger->InstallProcess);

			pt_Trigger->InstallProcess += 0.01f;
			PerInstall = pt_Trigger->InstallProcess;
		}
		else if (PerInstall > 1.0f && InstallCount > 0)
		{
			PerInstall = 0.0f;
			InstallCount--;
			printf("InstallCount : %d", InstallCount);

			isTrigger = false;
			pt_Trigger->InstallState = false;
			HUDAngel->Angel_Install_State = false;
			
			if (InstallCount == 0) UGameplayStatics::OpenLevel(this, "Winer");
		}
		HUDAngel->HUD_Update(pt_Trigger->InstallProcess);
	}
	else print("Installing false");
}

void AAngelCharacter::EndInstall()
{
	if (isTrigger == true && pt_Trigger->InstallState == true)
	{
		if (PerInstall <= 1.0f && InstallCount > 0)
		{
			print("EndInstall");
			printf("Install : %f", pt_Trigger->InstallProcess);

			pt_Trigger->InstallProcess += 0.01f;
			PerInstall = pt_Trigger->InstallProcess;

			HUDAngel->Angel_Install_State = false;
			HUDAngel->HUD_Update(pt_Trigger->InstallProcess);
		}
	}
	else print("EndInstall false");
}
