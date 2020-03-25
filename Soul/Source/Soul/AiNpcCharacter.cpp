// Fill out your copyright notice in the Description page of Project Settings.


#include "AiNpcCharacter.h"

// Sets default values
AAiNpcCharacter::AAiNpcCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f),
		FRotator(0.0f, -90.0f, 0.0f));
	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_SOUL_AI(TEXT("/Game/ParagonTwinblast/Characters/Heroes/TwinBlast/Meshes/TwinBlast.TwinBlast"));
	if (SK_SOUL_AI.Succeeded()) GetMesh()->SetSkeletalMesh(SK_SOUL_AI.Object);
	
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	static ConstructorHelpers::FClassFinder<UAnimInstance>BP_SOUL_AI(TEXT("/Game/Project_Soul/BluePrint/BP_HumanChar.BP_HumanChar_C"));
	if (BP_SOUL_AI.Succeeded()) GetMesh()->SetAnimInstanceClass(BP_SOUL_AI.Class);
}

// Called when the game starts or when spawned
void AAiNpcCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAiNpcCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAiNpcCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("ForwardBack"), this, &AAiNpcCharacter::ForwardBack);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AAiNpcCharacter::LeftRight);


}

void AAiNpcCharacter::ForwardBack(float NewAxisValue)
{
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void AAiNpcCharacter::LeftRight(float NewAxisValue)
{
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}

void AAiNpcCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}

void AAiNpcCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}

