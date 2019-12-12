// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Soul.h"
#include "AIController.h"
#include "MyAIController.generated.h"

/**
 * 
 */
UCLASS()
class SOUL_API AMyAIController : public AAIController
{
	GENERATED_BODY()

public:
	AMyAIController();
	virtual	void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
 
	static const FName HomePosKey;
	static const FName PatrolPosKey;
	static const FName TargetKey;

private:
	UPROPERTY()
	class UBehaviorTree* BTAsset;

	UPROPERTY()
	class UBlackboardData* BBAsset;


	void OnRepeatTimer();

	FTimerHandle RepeatTimerHandle;
	float RepeatInterval;
};
