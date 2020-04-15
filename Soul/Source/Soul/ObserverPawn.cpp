// Fill out your copyright notice in the Description page of Project Settings.


#include "ObserverPawn.h"

// Sets default values
AObserverPawn::AObserverPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	MoveMent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MOVEMENT"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CAPSULE"));
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MESH"));

	RootComponent = Capsule;
	Mesh->SetupAttachment(Capsule);
	SpringArm->SetupAttachment(Capsule);
	Camera->SetupAttachment(SpringArm);

	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));
	Capsule->SetCapsuleHalfHeight(44.0f);
	Capsule->SetCapsuleRadius(22.0f);
	Mesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -44.0f),FRotator(0.0f,-90.0f,0.0f));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>OBSERVER(TEXT("/Game/FPS_Weapon_Bundle/Weapons/Meshes/M9_Knife/SK_M9_Knife_X.SK_M9_Knife_X"));
	if (OBSERVER.Succeeded())
	{
		Mesh->SetSkeletalMesh(OBSERVER.Object);
	}
}

// Called when the game starts or when spawned
void AObserverPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObserverPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AObserverPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}
void AObserverPawn::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}
// Called to bind functionality to input
void AObserverPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis(TEXT("ForwardBack"), this, &AObserverPawn::ForwardBack);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AObserverPawn::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AObserverPawn::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AObserverPawn::Turn);

}
void AObserverPawn::ForwardBack(float Value)
{
	AddMovementInput(GetActorForwardVector(), Value);
}
void AObserverPawn::LeftRight(float Value)
{
	AddMovementInput(GetActorRightVector(), Value);
}
void AObserverPawn::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}
void AObserverPawn::Turn(float Value)
{
	AddControllerYawInput(Value);
}