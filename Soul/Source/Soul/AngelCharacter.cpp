#include "AngelCharacter.h"
#include "AngelAnimInstance.h"

// 생성자에서 User 초기화
AAngelCharacter::AAngelCharacter()
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
	static ConstructorHelpers::FClassFinder<UAnimInstance> BP_ANIM_HUMANCHAR(TEXT("/Game/Project_Soul/BluePrint/BP_Angel.BP_Angel_C"));

	if (BP_ANIM_HUMANCHAR.Succeeded())
		GetMesh()->SetAnimInstanceClass(BP_ANIM_HUMANCHAR.Class);

	// Value Initialize
	SetControlMode(EControlMode::TPS);

	ArmLengthSpeed = 3.0f;
	ArmRotationSpeed = 10.0f;

	//천사 속도
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
	//점프
	GetCharacterMovement()->JumpZVelocity = 500.0f;
}

void AAngelCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AAngelCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UserCameraArm->TargetArmLength = FMath::FInterpTo(UserCameraArm->TargetArmLength, ArmLengthTo, DeltaTime, ArmLengthSpeed);
}

void AAngelCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	AngelAnim = Cast<UAngelAnimInstance>(GetMesh()->GetAnimInstance());
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

	//모션
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Pressed, this, &AAngelCharacter::Walk);
	PlayerInputComponent->BindAction(TEXT("Walk"), EInputEvent::IE_Released, this, &AAngelCharacter::Stop_Walk);
	PlayerInputComponent->BindAction(TEXT("LayDown"), EInputEvent::IE_Pressed, this, &AAngelCharacter::LayDown);
	PlayerInputComponent->BindAction(TEXT("LayDown"), EInputEvent::IE_Released, this, &AAngelCharacter::Stop_LayDown);
	//행동

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
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
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
void AAngelCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}

void AAngelCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}
void AAngelCharacter::Walk()
{
	print("Input Shift");
	Is_Walking = true;
	AngelAnim->Is_Walk = Is_Walking;
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
}
void AAngelCharacter::Stop_Walk()
{
	Is_Walking = false;
	AngelAnim->Is_Walk = Is_Walking;
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
}
void AAngelCharacter::LayDown()
{
	print("Input Ctrl");
	Is_LayDowning = true;
	AngelAnim->Is_LayDown = Is_LayDowning;
	GetCharacterMovement()->MaxWalkSpeed = 150.0f;
}
void AAngelCharacter::Stop_LayDown()
{
	Is_LayDowning = false;
	AngelAnim->Is_LayDown = Is_LayDowning;
	GetCharacterMovement()->MaxWalkSpeed = 1000.0f;
}