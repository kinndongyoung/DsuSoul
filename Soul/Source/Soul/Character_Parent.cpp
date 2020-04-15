#include "Character_Parent.h"
#include "AnimInstance_Parent.h"
#include "Bullet_Parent.h"
#include "HUD_Parent.h"
#include "Components/WidgetComponent.h"
#include "DrawDebugHelpers.h"
                                                                                                                                                                                                      
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
	ArmLengthSpeed = 5.0f;
	ArmRotationSpeed = 10.0f;

	// Animation
	isFiring = false;
	Is_MaxLookUp = false;
	Is_Zoom = false;
	Is_Walking = false;

	// Status
	// Character Number
	Number = 0;
	// Hit Value
	TakeHit_State = false;
	Regeneration_Interval = 0.0f;
	TakeHit_State_Interval = 0.0f;

	// HUD
	HUD_Rot = 0.0f;

	// TPS Setting
	WidgetClass_Bar_TPS->SetWidgetSpace(EWidgetSpace::World);
	WidgetClass_Bar_TPS->SetPivot(FVector2D(0.0f, 1.0f));
	WidgetClass_Bar_TPS->SetWorldScale3D(FVector(0.2f, 0.2f, 0.2f));
	WidgetClass_Bar_TPS->SetRelativeLocationAndRotation(FVector(-40.0f, 0.0f, 80.0f), FRotator(0.0f, -90.0f, 0.0f));
	
	// HP
	Initial_HP = 100.0f;
	CurrentHp = Initial_HP;
	// SP
	Initial_SP = 0.0f;
	CurrentSP = Initial_SP;
	// Bullet
	ammo = 30;
	// Skill
	Activate_Skill = false;


	// Move Speed
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
	// Jump Speed
	GetCharacterMovement()->JumpZVelocity = 600.0f;

	// Respawn Value
	DeathTime = 600.0f;
	RespawnTime = 0.0f;
	// Hit State
	Hit = false;
	vec.Z = 350.0f;
}

void ACharacter_Parent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// 카메라 전환 부드럽게 하는 부분
	UserCameraArm->TargetArmLength = FMath::FInterpTo(UserCameraArm->TargetArmLength, ArmLengthTo, DeltaTime, ArmLengthSpeed);

	// HP Regeneration	
	if (TakeHit_State == false && CurrentHp < 100.0f) // 1초마다 체력 재생
	{
		if (Regeneration_Interval <= 1.0f)
			Regeneration_Interval += DeltaTime;
		else if (Regeneration_Interval >= 1.0f)
		{
			Regeneration_Interval = 0.0f;

			// 직업이 탱커일 경우 직업 활성화시 1초마다 체력 4재생
			if (CurrentCharJob == ECharacterJob::CLASS_TANKER)
			{
				if (Activate_Skill) CurrentHp += 4.0f;
				else CurrentHp += 2.5f;
			}// 다른 직업들은 모두 2.5씩 재생
			else CurrentHp += 2.5f;
		}
	}
	else if (TakeHit_State == true) // 3초 피격 안받으면 회복하도록 지시하는 부분
	{
		if (TakeHit_State_Interval <= 3.0f)
			TakeHit_State_Interval += DeltaTime;
		else if (TakeHit_State_Interval >= 3.0f)
		{
			TakeHit_State_Interval = 0.0f;
			TakeHit_State = false;
		}
	}
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

	// 모션
	// 걷기
	PlayerInputComponent->BindAction(TEXT("Walk"), IE_Pressed, this, &ACharacter_Parent::Walk);
	PlayerInputComponent->BindAction(TEXT("Walk"), IE_Released, this, &ACharacter_Parent::Stop_Walk);
	// 재장전
	PlayerInputComponent->BindAction(TEXT("Reload"), IE_Pressed, this, &ACharacter_Parent::ReloadFunc);
	PlayerInputComponent->BindAction(TEXT("Reload"), IE_Released, this, &ACharacter_Parent::Stop_ReloadFunc);
	
	// 이동 및 회전
	PlayerInputComponent->BindAxis(TEXT("ForwardBack"), this, &ACharacter_Parent::ForwardBack);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &ACharacter_Parent::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ACharacter_Parent::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ACharacter_Parent::LookUp);
}

// Set Camera
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
			UserCameraArm->bEnableCameraLag = true;
			UserCameraArm->bEnableCameraRotationLag = true;
			UserCameraArm->CameraLagSpeed = 20.0f;
			UserCameraArm->CameraRotationLagSpeed = 20.0f;
			bUseControllerRotationYaw = true;
		}break;
		case EControlMode::FPS:
		{
			UserCameraArm->bUsePawnControlRotation = true;
			UserCameraArm->bInheritPitch = true;
			UserCameraArm->bInheritRoll = true;
			UserCameraArm->bInheritYaw = true;
			UserCameraArm->bDoCollisionTest = true;
			UserCameraArm->bEnableCameraLag = false;
			UserCameraArm->bEnableCameraRotationLag = false;
			bUseControllerRotationYaw = true;
		}break;
	}
}

void ACharacter_Parent::Zoom()
{
	if (Is_Zoom == false)
	{
		SetControlMode(EControlMode::FPS);

		WidgetClass_Bar_TPS->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));
		WidgetClass_Bar_TPS->SetRelativeLocation(FVector(-45.0f, 10.0f, 100.0f));

		HUDParent->CrossHair_State = true;
		Is_Zoom = true;
	}
	else if (Is_Zoom == true)
	{
		SetControlMode(EControlMode::TPS);
		CurrentCameraMode = ECameraMode::ZOOM_RIGHT;

		WidgetClass_Bar_TPS->SetWorldScale3D(FVector(0.2f, 0.2f, 0.2f));
		WidgetClass_Bar_TPS->SetRelativeLocation(FVector(-40.0f, 0.0f, 80.0f));

		HUDParent->CrossHair_State = false;
		Is_Zoom = false;
	}
}

void ACharacter_Parent::CameraSwitch()
{
	switch (CurrentCameraMode)
	{
		case ECameraMode::ZOOM_LEFT: CurrentCameraMode = ECameraMode::ZOOM_RIGHT; break;
		case ECameraMode::ZOOM_RIGHT: CurrentCameraMode = ECameraMode::ZOOM_LEFT; break;
	}
}

// Move Character
void ACharacter_Parent::ForwardBack(float NewAxisValue)
{
	if (AnimParent->Is_Reload == false && AnimParent->Is_Death == false)
		AddMovementInput(GetActorForwardVector(), NewAxisValue);
	if (NewAxisValue < 0)
	{
		AnimParent->Is_Back_Walk = true;
		CurrentBlinkDir_PosX = EBlinkDirect_PosX::BLINK_DIR_BACK;
	}
	else if(NewAxisValue > 0)
	{
		AnimParent->Is_Back_Walk = false;
		CurrentBlinkDir_PosX = EBlinkDirect_PosX::BLINK_DIR_FORWARD;
	}
	else
	{
		CurrentBlinkDir_PosX = EBlinkDirect_PosX::BLINK_DIR_INIT;
	}
}

void ACharacter_Parent::LeftRight(float NewAxisValue)
{
	if (AnimParent->Is_Reload == false && AnimParent->Is_Death == false)
		AddMovementInput(GetActorRightVector(), NewAxisValue);
	if (NewAxisValue < 0)
	{
		AnimParent->Is_Right_Walk = true;
		CurrentBlinkDir_PosZ = EBlinkDirect_PosZ::BLINK_DIR_RIGHT;
	}		
	else if (NewAxisValue > 0)
	{
		AnimParent->Is_Left_Walk = true;
		CurrentBlinkDir_PosZ = EBlinkDirect_PosZ::BLINK_DIR_LEFT;
	}		
	else
	{
		AnimParent->Is_Left_Walk = false;
		AnimParent->Is_Right_Walk = false;
		CurrentBlinkDir_PosZ = EBlinkDirect_PosZ::BLINK_DIR_INIT;
	}

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
		if (-70.0f <= AnimParent->Rotate_Value.Roll && AnimParent->Rotate_Value.Roll <= 70.0f)
		{
			if (Is_MaxLookUp == false)
				AddControllerPitchInput(NewAxisValue);
			else if (Is_MaxLookUp == true)
				Is_MaxLookUp = false;

			AnimParent->Rotate_Value.Roll += (NewAxisValue * 2.95f);//2.94~2.95
			WidgetClass_Bar_TPS->SetRelativeRotation(FRotator(HUD_Rot += (NewAxisValue * 3.0f), -90.0f, 0.0f));//3.5~4.0
		}
		
		if (-70.0f > AnimParent->Rotate_Value.Roll)
		{
			Is_MaxLookUp = true;
			GetControlRotation().SetComponentForAxis(EAxis::Y, 90.0f);
			AnimParent->Rotate_Value.Roll = -70.0f;
			HUD_Rot = -70.0f;
		}
		else if (AnimParent->Rotate_Value.Roll > 70.0f)
		{
			Is_MaxLookUp = true;
			GetControlRotation().SetComponentForAxis(EAxis::Y, 270.0f);
			AnimParent->Rotate_Value.Roll = 70.0f;
			HUD_Rot = 70.0f;
		}
	}
}

// Fire
void ACharacter_Parent::StartFire()
{
	if (ammo > 0 && isFiring == false)
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
		CameraLineTrace();
		UserLineTrace();

		ammo--;
		if (ammo > 0)
		{
			// 연사를 위한 StartFire 함수 생성	
			GetWorld()->GetTimerManager().SetTimer(timer, this, &ACharacter_Parent::Fire, 0.3f, false);
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
	GetCharacterMovement()->MaxWalkSpeed = 1250.0f;
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
	GetCharacterMovement()->JumpZVelocity = 600.0;
}

// Death
void ACharacter_Parent::Death()
{
	AnimParent->Is_Death = true;
	RespawnTime += 2.0f;
	GetCharacterMovement()->JumpZVelocity = 0.0f;
	HUDParent->Death_bar = true;

	if (DeathTime <= RespawnTime) Respawn();
}

void ACharacter_Parent::Respawn()
{
	AnimParent->Is_Death = false;
	ammo = 30;
	CurrentHp = 100.0f;
	CurrentSP = 0.0f;
	RespawnTime = 0.0f;
	SetActorLocation(vec);
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	HUDParent->Death_bar = false;
}

// User 라인 트레이스
void ACharacter_Parent::UserLineTrace()
{	
	User_StartVector = GetMesh()->GetComponentLocation() + FVector(0.0f, 0.0f, 160.0f);
	User_EndVector = Camera_OutHit.ImpactPoint;

	DrawDebugLine(GetWorld(), User_StartVector, User_EndVector, FColor::Blue, true);
	User_isHit = GetWorld()->LineTraceSingleByChannel(User_OutHit, User_StartVector, User_EndVector, ECC_Visibility, User_CollisionParams);

	if (User_isHit)
	{
		if (User_OutHit.GetActor()->ActorHasTag("Human_Character") ||
			User_OutHit.GetActor()->ActorHasTag("Devil_Character") ||
			User_OutHit.GetActor()->ActorHasTag("Angel_Character"))
		{			
			// SP 증가
			if (CurrentSP < 100.0f) CurrentSP += 5.0f;
			if (CurrentSP >= 100.0f)
			{
				Activate_Skill = true;
				if (CurrentCharJob == ECharacterJob::CLASS_DEALER)
					GetCharacterMovement()->MaxWalkSpeed = 1250.0f;
			}

			//printf("User Shoot -> Hit Actor : %s", *User_OutHit.GetActor()->GetName());
			//printf("User Shoot -> Hit Bone : %s", *User_OutHit.BoneName.ToString());
			//printf("User Shoot -> Hit Distance : %f", User_OutHit.Distance);
		}
	}
	else print("No Hit Character");
}

// Camera 라인 트레이스
void ACharacter_Parent::CameraLineTrace()
{
	Camera_StartVector = Camera->GetComponentLocation();
	Camera_ForwardVector = Camera->GetForwardVector();
	Camera_EndVector = (Camera_StartVector + (Camera_ForwardVector*10000.0f));

	DrawDebugLine(GetWorld(), Camera_StartVector, Camera_EndVector, FColor::Red, true);
	Camera_isHit = GetWorld()->LineTraceSingleByChannel(Camera_OutHit, Camera_StartVector, Camera_EndVector, ECC_Visibility, Camera_CollisionParams);
}
