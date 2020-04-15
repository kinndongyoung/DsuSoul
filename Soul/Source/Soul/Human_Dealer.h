#pragma once

#include "Soul.h"
#include "HumanCharacter.h"
#include "Human_Dealer.generated.h"

UCLASS()
class SOUL_API AHuman_Dealer : public AHumanCharacter
{
	GENERATED_BODY()
	
public:
	AHuman_Dealer();

	// 애니메이션 클래스
	UPROPERTY(VisibleAnywhere, Category = AnimInstance)
	class UAnim_Human_Dealer* AnimHuman;

protected:
	void BeginPlay() final;
	void Tick(float DeltaTime) final;
	void PostInitializeComponents() final;
	void PossessedBy(AController* NewController) final;
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) final;

public:
	// 공통 함수
	// 카메라 관련 //
	void SetControlMode(EControlMode NewControlMode) final;
	void Zoom() final;
	void CameraSwitch() final;

	// 행동	함수
	void ForwardBack(float NewAxisValue) final;
	void LeftRight(float NewAxisValue) final;
	void LookUp(float NewAxisValue) final;
	void Turn(float NewAxisValue) final;

	// 공격 함수
	void StartFire() final;
	void Fire() final;
	void StopFire() final;

	// 모션 함수
	void Walk() final;
	void Stop_Walk() final;
	void ReloadFunc() final;
	void Stop_ReloadFunc() final;

	// 리스폰 관련
	void Death() final;
	void Respawn() final;

	// hp,sp - 함수
	UFUNCTION(BlueprintPure, Category = "HP")
	float GetInitialHP() final { return AHumanCharacter::GetInitialHP(); }

	UFUNCTION(BlueprintPure, Category = "HP")
	float GetCurrentInitialHP() final { return AHumanCharacter::GetCurrentInitialHP(); }

	UFUNCTION(BlueprintCallable, Category = "HP")
	void UpdateCurrentHP() final { AHumanCharacter::UpdateCurrentHP(); }

	UFUNCTION(BlueprintPure, Category = "SP")
	float GetInitialSP() final { return AHumanCharacter::GetInitialSP(); }

	UFUNCTION(BlueprintPure, Category = "SP")
	float GetCurrentInitialSP() final { return AHumanCharacter::GetCurrentInitialSP(); }

	UFUNCTION(BlueprintCallable, Category = "SP")
	void UpdateCurrentSP() final { AHumanCharacter::UpdateCurrentSP(); }

	UFUNCTION(BlueprintPure, Category = "Death")
	float Respawn_bar() final { return AHumanCharacter::Respawn_bar(); }

	// 총구 함수
	UFUNCTION(BlueprintPure, Category = "Muzzle")
	FVector SetMuzzlePos() final;

	UFUNCTION(BlueprintPure, Category = "Muzzle")
	FRotator SetMuzzleRot() final;

	// 개별 함수
	// 영혼 수집 함수
	void StartCollect() final;
	void Collecting() final;
	void EndCollect() final;

	// 인간 Collect Progress Bar - 함수
	UFUNCTION(BlueprintPure, Category = "Human_Dealer PerCollect")
	float GetPerCollect() final;
};
