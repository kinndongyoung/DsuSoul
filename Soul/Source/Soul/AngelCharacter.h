#pragma once

#include "Soul.h"
#include "Character_Parent.h"
#include "AngelCharacter.generated.h"

UCLASS()
class SOUL_API AAngelCharacter : public ACharacter_Parent
{
	GENERATED_BODY()

public:
	AAngelCharacter();

private:
	void BeginPlay();
	void Tick(float DeltaTime);
	void PostInitializeComponents();
	void PossessedBy(AController* NewController);
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

public:
	// 스테이터스
	bool DieState;

public:
	// 설치 변수
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Install)
	float PerInstall;
	int InstallCount;

	// 트리거 //
	bool isTrigger;				   
	UPROPERTY(VisibleAnywhere, Category = Trigger)
	class AAngel_InstallTrigger* pt_Trigger;

	// HUD 클래스
	UPROPERTY(VisibleAnywhere, Category = HUD)
	class AHUD_Angel* HUDAngel;

	// 애니메이션 클래스
	UPROPERTY(VisibleAnywhere, Category = AnimInstance)
	class UAngelAnimInstance* AnimAngel;

public:
	// 공통 함수
	// 카메라 관련 //
	virtual void SetControlMode(EControlMode NewControlMode) override;
	virtual void Zoom() override;
	virtual void CameraSwitch() override;

	// 행동	함수
	virtual void ForwardBack(float NewAxisValue) override;
	virtual void LeftRight(float NewAxisValue) override;
	virtual void LookUp(float NewAxisValue) override;
	virtual void Turn(float NewAxisValue) override;

	// 공격 함수
	virtual void StartFire() override;
	virtual void Fire() override;
	virtual void StopFire() override;

	// 모션 함수
	virtual void Walk() override;
	virtual void Stop_Walk() override;
	virtual void ReloadFunc() override;
	virtual void Stop_ReloadFunc() override;

	// 리스폰 관련
	virtual void Death() override;
	virtual void Respawn() override;

	// hp,sp - 함수
	UFUNCTION(BlueprintPure, Category = "HP")
	virtual float GetInitialHP() override { return Initial_HP; }

	UFUNCTION(BlueprintPure, Category = "HP")
	virtual float GetCurrentInitialHP() override { return CurrentHp; }

	UFUNCTION(BlueprintCallable, Category = "HP")
	virtual void UpdateCurrentHP() override { CurrentHp = CurrentHp; }

	UFUNCTION(BlueprintPure, Category = "SP")
	virtual float GetInitialSP() override { return Initial_SP; }

	UFUNCTION(BlueprintPure, Category = "SP")
	virtual float GetCurrentInitialSP() override { return CurrentSP; }

	UFUNCTION(BlueprintCallable, Category = "SP")
	virtual void UpdateCurrentSP() override { CurrentSP = CurrentSP; }

	UFUNCTION(BlueprintPure, Category = "Death")
	virtual float Respawn_bar() override { return RespawnTime += 2.0f; }

	// 총구 함수
	UFUNCTION(BlueprintPure, Category = "Muzzle")
	virtual FVector SetMuzzlePos() override;

	UFUNCTION(BlueprintPure, Category = "Muzzle")
	virtual FRotator SetMuzzleRot() override;


	// 개별 함수
	// 설치 함수
	void StartInstall();
	void Installing();
	void EndInstall();
};
