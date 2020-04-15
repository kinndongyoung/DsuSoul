// Fill out your copyright notice in the Description page of Project Settings.


#include "Observer.h"
#include "Soul_GameMode.h"
#include "Human_Shielder.h"
#include "Human_Dealer.h"
#include "Human_Healer.h"
#include "Devil_Shielder.h"
#include "Devil_Dealer.h"
#include "Devil_Healer.h"
#include "Angel_Shielder.h"
#include "Angel_Dealer.h"
#include "Angel_Healer.h"

// Sets default values
AObserver::AObserver()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObserver::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObserver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AObserver::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}
void AObserver::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}
// Called to bind functionality to input
void AObserver::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("ForwardBack"), this, &AObserver::ForwardBack);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AObserver::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AObserver::Turn);
}
void AObserver::ForwardBack(float NewAxisValue)
{
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}
void AObserver::LeftRight(float NewAxisValue)
{
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}
void AObserver::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}
void AObserver::LookUp(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}