#include "AngelCharacter.h"
#include "AngelAnimInstance.h"
#include "HUD_Angel.h"
#include "Angel_InstallTrigger.h"

// 생성자에서 User 초기화
AAngelCharacter::AAngelCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	// Add Tag
	Tags.AddUnique(TEXT("Angel_Character"));
	
	// Camera Create
	UserCameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CAMERA_ARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	// Camera Initialize
	UserCameraArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(UserCameraArm);

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
	UserCameraArm->TargetArmLength = 200.0f;
	UserCameraArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 40.0f), FRotator(-30.0f, 0.0f, 0.0f));

	// Skeletal Mesh Initialize
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_USER(TEXT("/Game/AnimStarterPack/UE4_Mannequin/Mesh/SK_Mannequin.SK_Mannequin"));

	if (SK_SOUL_USER.Succeeded())
		GetMesh()->SetSkeletalMesh(SK_SOUL_USER.Object);
	
	// Anim Instance Initialize
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_HUMANCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_Angel.BP_Angel_C"));

	if (BP_ANIM_HUMANCHAR.Succeeded())
		GetMesh()->SetAnimInstanceClass(BP_ANIM_HUMANCHAR.Class);

	// Value Initialize
	SetControlMode(EControlMode::TPS);

	ArmLengthSpeed = 3.0f;
	ArmRotationSpeed = 10.0f;

	// 스테이터스
	DieState = false;
	Status_HP = 100.0f;

	// Install Value Init
	InstallCount = 5;
	PerInstall = 0.0f;
	isTrigger = false;	

	// Jump Height
	GetCharacterMovement()->JumpZVelocity = 600.0f;
}

void AAngelCharacter::BeginPlay()
{
	Super::BeginPlay();

	AngelAnim = Cast<UAngelAnimInstance>(GetMesh()->GetAnimInstance());
	HUD_Angel = Cast<AHUD_Angel>(GetWorld()->GetFirstPlayerController()->GetHUD());

	// Controll Setting
	bUseControllerRotationYaw = true;
}

void AAngelCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Status_HP <= 0.0f) DieState = true;
	UserCameraArm->TargetArmLength = FMath::FInterpTo(UserCameraArm->TargetArmLength, ArmLengthTo, DeltaTime, ArmLengthSpeed);
}

void AAngelCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AAngelCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

// Input Key
void AAngelCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AAngelCharacter::Jump);

	// 상호작용
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Pressed, this, &AAngelCharacter::StartInstall);
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Repeat, this, &AAngelCharacter::Installing);
	PlayerInputComponent->BindAction(TEXT("InterAction"), IE_Released, this, &AAngelCharacter::EndInstall);

	// 이동 및 회전
	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AAngelCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AAngelCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AAngelCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AAngelCharacter::LookUp);
}

// Set Camera Arm
void AAngelCharacter::SetControlMode(EControlMode NewControlMode)
{
	ArmLengthTo = 200.0f;
	UserCameraArm->bUsePawnControlRotation = true;
	UserCameraArm->bInheritPitch = true;
	UserCameraArm->bInheritRoll = true;
	UserCameraArm->bInheritYaw = true;
	UserCameraArm->bDoCollisionTest = true;
	bUseControllerRotationYaw = true;
	//GetCharacterMovement()->bOrientRotationToMovement = true;
	//GetCharacterMovement()->bUseControllerDesiredRotation = false;
	//GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
}

// Move Character
void AAngelCharacter::UpDown(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), NewAxisValue);
}

void AAngelCharacter::LeftRight(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), NewAxisValue);
}

// Rotate Character
void AAngelCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}

void AAngelCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
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
			HUD_Angel->Angel_Install_State = true;
			HUD_Angel->HUD_Update(pt_Trigger->InstallProcess);
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
			HUD_Angel->Angel_Install_State = false;
			if (InstallCount == 0)
				UGameplayStatics::OpenLevel(this, "Winer");
		}
		HUD_Angel->HUD_Update(pt_Trigger->InstallProcess);
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
			HUD_Angel->Angel_Install_State = false;
			HUD_Angel->HUD_Update(pt_Trigger->InstallProcess);
		}
	}
	else print("EndInstall false");
}
