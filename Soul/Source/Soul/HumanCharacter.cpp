#include "HumanCharacter.h"
#include "HUD_Human.h"
#include "Human_PaustSoulCase.h"
#include "Components/WidgetComponent.h"

// 생성자에서 User 초기화
AHumanCharacter::AHumanCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// Add Tag
	Tags.AddUnique(TEXT("Human_Character"));

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
}

void AHumanCharacter::BeginPlay()
{
	ACharacter_Parent::BeginPlay();
	Super::BeginPlay();

	// HUD Setting
	HUDHuman = Cast<AHUD_Human>(GetWorld()->GetFirstPlayerController()->GetHUD());
	HUDParent = HUDHuman;

	// Status
	GiveSoulState = false;

	// Install Value Init
	MuzzleOffset = FVector(50.0f, 5.0f, 75.0f);
	PerCollect = 0.0f;
	isTrigger = false;
	ColletEnd = false;

	//vec.X = -4549.069824;
	//vec.Y = -769.621643;
	//vec.Z = 53.026909;
	//GetTransform().TransformFVector4(vec);
	//GetActorTransform().SetTranslation(vec);
	//SetActorLocation(vec);
}

void AHumanCharacter::Tick(float DeltaTime)
{
	ACharacter_Parent::Tick(DeltaTime);
	Super::Tick(DeltaTime);
	
	// HP 및 SP 관련
	UpdateCurrentHP();
	UpdateCurrentSP();
	
	if (CurrentHp <= 0) Death();

	FTransform tr = GetTransform();
	if (tr.GetTranslation().Z <= -110) CurrentHp -= 3;
}

void AHumanCharacter::PostInitializeComponents()
{
	ACharacter_Parent::PostInitializeComponents();
	Super::PostInitializeComponents();
}

void AHumanCharacter::PossessedBy(AController* NewController)
{
	ACharacter_Parent::PossessedBy(NewController);
	Super::PossessedBy(NewController);
}

// Input Key
void AHumanCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	ACharacter_Parent::SetupPlayerInputComponent(PlayerInputComponent);
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

// Set Camera
void AHumanCharacter::SetControlMode(EControlMode NewControlMode)
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

void AHumanCharacter::Zoom()
{
	ACharacter_Parent::Zoom();
	HUDHuman->HUD_HPSP();
}

void AHumanCharacter::CameraSwitch()
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
void AHumanCharacter::ForwardBack(float NewAxisValue)
{
	ACharacter_Parent::ForwardBack(NewAxisValue);
}

void AHumanCharacter::LeftRight(float NewAxisValue)
{
	ACharacter_Parent::LeftRight(NewAxisValue);
}

// Rotate Character
void AHumanCharacter::Turn(float NewAxisValue)
{
	ACharacter_Parent::Turn(NewAxisValue);
}

void AHumanCharacter::LookUp(float NewAxisValue)
{
	ACharacter_Parent::LookUp(NewAxisValue);
}

// Fire
void AHumanCharacter::StartFire()
{
	ACharacter_Parent::StartFire();
}

void AHumanCharacter::Fire()
{
	ACharacter_Parent::Fire();
}

void AHumanCharacter::StopFire()
{
	ACharacter_Parent::StopFire();
}

// Active
void AHumanCharacter::Walk()
{
	ACharacter_Parent::Walk();
}

void AHumanCharacter::Stop_Walk()
{
	ACharacter_Parent::Stop_Walk();
}

void AHumanCharacter::ReloadFunc()
{
	ACharacter_Parent::ReloadFunc();
}

void AHumanCharacter::Stop_ReloadFunc()
{
	ACharacter_Parent::Stop_ReloadFunc();
}

// Death
void AHumanCharacter::Death()
{
	ACharacter_Parent::Death();

	HUDHuman->Death_bar = true;
	HUDHuman->HUD_Respawn();
	Is_Zoom = true;

	if (DeathTime <= RespawnTime)
		ACharacter_Parent::Respawn();
}

void AHumanCharacter::Respawn()
{
	ACharacter_Parent::Respawn();

	HUDHuman->Death_bar = false;
	RespawnTime = 0.0f;
}

// Install
void AHumanCharacter::StartCollect()
{
	if (isTrigger == true && HUDHuman->CollectCount == 2)
	{
		if (PerCollect <= 100.0f)
		{
			print("StartCollect");
			printf("Collect : %f", PerCollect);

			PerCollect += 1.0f;

			HUDHuman->Human_Collect_State = true;
			HUDHuman->HUD_CollectBar();
		}
	}
	else print("StartCollect false");
}

void AHumanCharacter::Collecting()
{
	if (isTrigger == true && HUDHuman->CollectCount == 2)
	{
		if (PerCollect <= 100.0f)
		{
			print("Collecting");
			printf("Collect : %f", PerCollect);

			PerCollect += 1.0f;
		}
		else if (PerCollect > 100.0f)
		{
			print("Paust Activate");

			isTrigger = false;
			ColletEnd = true;

			HUDHuman->Human_Collect_State = false;			
			HUDHuman->HUD_CollectBar();
		}
	}
	else print("Collecting false");
}

void AHumanCharacter::EndCollect()
{
	if (isTrigger == true && HUDHuman->CollectCount == 2)
	{
		if (PerCollect <= 100.0f)
		{
			print("EndCollect");
			printf("Collect : %f", PerCollect);

			PerCollect += 1.0f;

			HUDHuman->Human_Collect_State = false;
			HUDHuman->HUD_CollectBar();
		}
	}
	else print("EndCollect false");
}
