// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "soul.h"
#include "GameFramework/Character.h"
#include "Observer.generated.h"

UCLASS()
class SOUL_API AObserver : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AObserver();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;
	virtual void PossessedBy(AController* NewController) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ForwardBack(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void Turn(float NewAxisValue);
	void LookUp(float NewAxisValue);
};
