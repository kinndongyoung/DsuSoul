#include "DevilCharacter.h"
#include "DevilAnimInstance.h"

// 생성자에서 User 초기화
ADevilCharacter::ADevilCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

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
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_HUMANCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_Devil.BP_Devil_C"));

	if (BP_ANIM_HUMANCHAR.Succeeded())
		GetMesh()->SetAnimInstanceClass(BP_ANIM_HUMANCHAR.Class);

	// Value Initialize
	SetControlMode(EControlMode::TPS);

	ArmLengthSpeed = 3.0f;
	ArmRotationSpeed = 10.0f;

	//모션 변수
	isFiring = false;
	Is_Walking = false;
	Is_LayDowning = false;
	//악마 속도
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
	//점프
	GetCharacterMovement()->JumpZVelocity = 600.0f;
}

void ADevilCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ADevilCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UserCameraArm->TargetArmLength = FMath::FInterpTo(UserCameraArm->TargetArmLength, ArmLengthTo, DeltaTime, ArmLengthSpeed);
}

void ADevilCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	DevilAnim = Cast<UDevilAnimInstance>(GetMesh()->GetAnimInstance());
}

void ADevilCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

// Input Key
void ADevilCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ADevilCharacter::Jump);

	//모션
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Pressed, this, &ADevilCharacter::Walk);
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Released, this, &ADevilCharacter::Stop_Walk);
	PlayerInputComponent->BindAction(TEXT("LayDown"), EInputEvent::IE_Pressed, this, &ADevilCharacter::LayDown);
	PlayerInputComponent->BindAction(TEXT("LayDown"), EInputEvent::IE_Released, this, &ADevilCharacter::Stop_LayDown);
	//행동

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &ADevilCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &ADevilCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ADevilCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ADevilCharacter::LookUp);
}

// Set Camera Arm
void ADevilCharacter::SetControlMode(EControlMode NewControlMode)
{
	ArmLengthTo = 200.0f;
	UserCameraArm->bUsePawnControlRotation = true;
	UserCameraArm->bInheritPitch = true;
	UserCameraArm->bInheritRoll = true;
	UserCameraArm->bInheritYaw = true;
	UserCameraArm->bDoCollisionTest = true;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
}

// Move Character
void ADevilCharacter::UpDown(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), NewAxisValue);
}

void ADevilCharacter::LeftRight(float NewAxisValue)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), NewAxisValue);
}

// Rotate Character
void ADevilCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}

void ADevilCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}
void ADevilCharacter::Walk()
{
	print("Input Shift");
	DevilAnim->Is_Walk = true;
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
}
void ADevilCharacter::Stop_Walk()
{
	Is_Walking = false;
	DevilAnim->Is_Walk = Is_Walking;
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
}
void ADevilCharacter::LayDown()
{
	print("Input Ctrl");
	Is_LayDowning = true;
	DevilAnim->Is_LayDown = Is_LayDowning;
	GetCharacterMovement()->MaxWalkSpeed = 150.0f;
}
void ADevilCharacter::Stop_LayDown()
{
	Is_LayDowning = false;
	DevilAnim->Is_LayDown = Is_LayDowning;
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
}