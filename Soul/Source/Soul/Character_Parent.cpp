#include "Character_Parent.h"
#include "AnimInstance_Parent.h"
#include "Bullet_Parent.h"
#include "HUD_Parent.h"
#include "Components/WidgetComponent.h"

ACharacter_Parent::ACharacter_Parent()
{
	PrimaryActorTick.bCanEverTick = true;

	// Camera Create
	UserCameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CAMERA_ARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	WidgetClass_Bar_TPS = CreateDefaultSubobject<UWidgetComponent>(TEXT("WIDGET"));

	// TPS HUD 
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_TPS(TEXT("/Game/Project_Soul/UI/TPS_HP_SP.TPS_HP_SP_C"));
	if (UI_HUD_TPS.Succeeded()) WidgetClass_Bar_TPS->SetWidgetClass(UI_HUD_TPS.Class);
}

void ACharacter_Parent::BeginPlay()
{
	Super::BeginPlay();

	// Camera
	ArmLengthSpeed = 0.0f;
	ArmRotationSpeed = 0.0f;

	// Animation
	isFiring = false;
	Is_Zoom = false;
	Is_Walking = false;

	// Status
	// Character Number
	Number = 0;

	// HUD 변수
	HUD_Rot = 0.0f;
	HUD_Pos_Y = 10.0f;
	// HP
	Initial_HP = 100.0f;
	CurrentHp = Initial_HP;
	// SP
	Initial_SP = 0.0f;
	CurrentSP = Initial_SP;
	// Bullet
	ammo = 30;

	// Move Speed
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
	// Jump Speed
	GetCharacterMovement()->JumpZVelocity = 400.0f;

	// Respawn Value
	DeathTime = 600.0f;
	RespawnTime = 0.0f;
	// Hit State
	Hit = false;
}

void ACharacter_Parent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACharacter_Parent::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void ACharacter_Parent::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

void ACharacter_Parent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 공격 및 점프
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ACharacter_Parent::Jump);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ACharacter_Parent::StartFire);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Released, this, &ACharacter_Parent::StopFire);

	//모션
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Pressed, this, &ACharacter_Parent::Walk);
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Released, this, &ACharacter_Parent::Stop_Walk);

	PlayerInputComponent->BindAction(TEXT("Reload"), EInputEvent::IE_Pressed, this, &ACharacter_Parent::ReloadFunc);
	PlayerInputComponent->BindAction(TEXT("Reload"), EInputEvent::IE_Released, this, &ACharacter_Parent::Stop_ReloadFunc);

	// 이동 및 회전
	PlayerInputComponent->BindAxis(TEXT("ForwardBack"), this, &ACharacter_Parent::ForwardBack);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &ACharacter_Parent::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ACharacter_Parent::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ACharacter_Parent::LookUp);
}

// Set Camera Arm
void ACharacter_Parent::SetControlMode(EControlMode NewControlMode)
{
	CurrentControlMode = NewControlMode;

	switch (CurrentControlMode)
	{
		case EControlMode::TPS:
		{
			UserCameraArm->bUsePawnControlRotation = true;
			UserCameraArm->bInheritPitch = true;
			UserCameraArm->bInheritRoll = true;
			UserCameraArm->bInheritYaw = true;
			UserCameraArm->bDoCollisionTest = true;
			bUseControllerRotationYaw = true;
		}break;
		case EControlMode::FPS:
		{
			UserCameraArm->bUsePawnControlRotation = true;
			UserCameraArm->bInheritPitch = true;
			UserCameraArm->bInheritRoll = true;
			UserCameraArm->bInheritYaw = true;
			UserCameraArm->bDoCollisionTest = true;
			bUseControllerRotationYaw = true;
		}break;
	}
}

// Move Character
void ACharacter_Parent::ForwardBack(float NewAxisValue)
{
	if (AnimParent->Is_Reload == false && AnimParent->Is_Death == false)
		AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void ACharacter_Parent::LeftRight(float NewAxisValue)
{
	if (AnimParent->Is_Reload == false && AnimParent->Is_Death == false)
		AddMovementInput(GetActorRightVector(), NewAxisValue);
}

// Rotate Character
void ACharacter_Parent::Turn(float NewAxisValue)
{
	if (AnimParent->Is_Death == false) AddControllerYawInput(NewAxisValue);
}

void ACharacter_Parent::LookUp(float NewAxisValue)
{
	if (AnimParent->Is_Death == false)
	{
		// 과회전 방지
		if (-36.0f <= AnimParent->Rotate_Value.Roll && AnimParent->Rotate_Value.Roll <= 36.0f)
		{
			AddControllerPitchInput(NewAxisValue);
			AnimParent->Rotate_Value.Roll += NewAxisValue;
			//WidgetClass_Bar_TPS->SetRelativeLocationAndRotation(FVector(-40.0f, HUD_Pos_Y -= NewAxisValue, -10.0f), FRotator(HUD_Rot += NewAxisValue, -90.0f, 0.0f));
		}
		else if (-36.0f > AnimParent->Rotate_Value.Roll)
		{
			GetControlRotation().SetComponentForAxis(EAxis::Y, 90.0f);
			AnimParent->Rotate_Value.Roll = -36.0f;
			//HUD_Rot = -36.0f;
			//HUD_Pos_Y = -26.0f;
		}
		else if (AnimParent->Rotate_Value.Roll > 36.0f)
		{
			GetControlRotation().SetComponentForAxis(EAxis::Y, 270.0f);
			AnimParent->Rotate_Value.Roll = 36.0f;
			//HUD_Rot = 36.0f;
			//HUD_Pos_Y = 46.0f;
		}
	}
}

// Fire
void ACharacter_Parent::Zoom()
{
	if (Is_Zoom == false)
	{
		Is_Zoom = true;
		HUDParent->HUD_State = false;
	}
	else if (Is_Zoom == true)
	{
		Is_Zoom = false;
		HUDParent->HUD_State = true;
	}
}


void ACharacter_Parent::StartFire()
{
	print("0");
	if (ammo > 0)
	{
		isFiring = true;
		AnimParent->IsFire = isFiring;
		Fire();
	}
}

void ACharacter_Parent::Fire()
{
	if (isFiring)
	{
		// 프로젝타일 발사를 시도합니다.
		if (WeaponBulletClass)
		{
			// MuzzleOffset 을 카메라 스페이스에서 월드 스페이스로 변환합니다.
			FVector CameraLocation;
			FRotator CameraRotation;
			GetActorEyesViewPoint(CameraLocation, CameraRotation);

			MuzzleLocation = this->ActorToWorld().GetLocation() + FTransform(CameraRotation).TransformVector(MuzzleOffset);
			FRotator MuzzleRotation = CameraRotation;

			UWorld* World = GetWorld();
			if (World)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = Instigator;

				// 총구 위치에 발사체를 스폰시킵니다.
				ABullet_Parent* Bullet = World->SpawnActor<ABullet_Parent>(WeaponBulletClass, MuzzleLocation, MuzzleRotation, SpawnParams);
				if (Bullet)
				{
					// 발사 방향을 알아냅니다.
					FVector LaunchDirection = MuzzleRotation.Vector();
					Bullet->FireInDirection(LaunchDirection);
					Bullet->FireActor(this);
				}
				ammo--;
			}
		}

		if (ammo > 0)
		{
			// 연사를 위한 StartFire 함수 생성			
			GetWorld()->GetTimerManager().SetTimer(timer, this, &ACharacter_Parent::Fire, 0.1f, false);
		}
		else StopFire();
	}
}

void ACharacter_Parent::StopFire()
{
	isFiring = false;
	AnimParent->IsFire = isFiring;
}

// Active
void ACharacter_Parent::Walk()
{
	print("Input Shift");
	Is_Walking = true;
	AnimParent->Is_Walk = ACharacter_Parent::Is_Walking;
	GetCharacterMovement()->MaxWalkSpeed = 1500.0f;
}

void ACharacter_Parent::Stop_Walk()
{
	Is_Walking = false;
	AnimParent->Is_Walk = ACharacter_Parent::Is_Walking;
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
}

void ACharacter_Parent::ReloadFunc()
{
	ammo = 30;
	AnimParent->Is_Reload = true;
	GetCharacterMovement()->JumpZVelocity = 0.0f;
}

void ACharacter_Parent::Stop_ReloadFunc()
{
	AnimParent->Is_Reload = false;
	GetCharacterMovement()->JumpZVelocity = 400.0;
}

// Death
void ACharacter_Parent::Death()
{
	AnimParent->Is_Death = true;
	RespawnTime += 2.0f;
	GetCharacterMovement()->JumpZVelocity = 0.0f;
	HUDParent->Death_bar = true;
	HUDParent->HUD_Respawn();

	if (DeathTime <= RespawnTime) Respawn();
}

void ACharacter_Parent::Respawn()
{
	ammo = 30;
	CurrentHp = 100.0f;
	CurrentSP = 0.0f;
	RespawnTime = 0.0f;
	SetActorLocation(vec);
	GetCharacterMovement()->JumpZVelocity = 400.0f;
	HUDParent->Death_bar = false;
}
