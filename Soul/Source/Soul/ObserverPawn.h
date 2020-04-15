// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "soul.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "ObserverPawn.generated.h"

UCLASS()
class SOUL_API AObserverPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AObserverPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void PostInitializeComponents() override;
	virtual void PossessedBy(AController* NewController) override;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* Camera;
	UPROPERTY(VisibleAnywhere, Category = MoveMent)
		UFloatingPawnMovement* MoveMent;
	UPROPERTY(VisibleAnywhere, Category = SpringArm)
		USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category = Collision)
		UCapsuleComponent* Capsule;
	UPROPERTY(VisibleAnywhere, Category = Visual)
		USkeletalMeshComponent* Mesh;
	void ForwardBack(float Value);
	void LeftRight(float Value);
	void LookUp(float Value);
	void Turn(float Value);
};