#pragma once

#include "Soul.h"
#include "AngelCharacter.h"
#include "Angel_Dealer.generated.h"

UCLASS()
class SOUL_API AAngel_Dealer : public AAngelCharacter
{
	GENERATED_BODY()
	
public:
	AAngel_Dealer();

	// 애니메이션 클래스
	UPROPERTY(VisibleAnywhere, Category = AnimInstance)
	class UAnim_Angel_Dealer* AnimAngel;

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
	float GetInitialHP() final { return AAngelCharacter::GetInitialHP(); }

	UFUNCTION(BlueprintPure, Category = "HP")
	float GetCurrentInitialHP() final { return AAngelCharacter::GetCurrentInitialHP(); }

	UFUNCTION(BlueprintCallable, Category = "HP")
	void UpdateCurrentHP() final { AAngelCharacter::UpdateCurrentHP(); }

	UFUNCTION(BlueprintPure, Category = "SP")
	float GetInitialSP() final { return AAngelCharacter::GetInitialSP(); }

	UFUNCTION(BlueprintPure, Category = "SP")
	float GetCurrentInitialSP() final { return AAngelCharacter::GetCurrentInitialSP(); }

	UFUNCTION(BlueprintCallable, Category = "SP")
	void UpdateCurrentSP() final { AAngelCharacter::UpdateCurrentSP(); }

	UFUNCTION(BlueprintPure, Category = "Death")
	float Respawn_bar() final { return AAngelCharacter::Respawn_bar(); }

	// 총구 함수
	UFUNCTION(BlueprintPure, Category = "Muzzle")
	FVector SetMuzzlePos() final;

	UFUNCTION(BlueprintPure, Category = "Muzzle")
	FRotator SetMuzzleRot() final;


	// 개별 함수
	// 설치 함수
	void StartInstall() final;
	void Installing() final;
	void EndInstall() final;
};
