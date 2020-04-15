#pragma once

#include "Soul.h"
#include "Character_Parent.h"
#include "HumanCharacter.generated.h"

UCLASS()
class SOUL_API AHumanCharacter : public ACharacter_Parent
{
	GENERATED_BODY()

public:
	AHumanCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	// 스테이터스
	bool GiveSoulState;

public:
	// 영혼 수집 변수
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Install)
	float PerCollect;
	bool ColletEnd;

	// 트리거 //
	bool isTrigger;
	UPROPERTY(VisibleAnywhere, Category = Trigger)
	class AHuman_PaustSoulCase* pt_Trigger;
	
	// HUD 클래스
	UPROPERTY(VisibleAnywhere, Category = HUD)
	class AHUD_Human* HUDHuman;

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
	virtual float GetInitialHP() override { return ACharacter_Parent::GetInitialHP(); }
	virtual float GetCurrentInitialHP() override { return ACharacter_Parent::GetCurrentInitialHP(); }
	virtual void UpdateCurrentHP() override { ACharacter_Parent::UpdateCurrentHP(); }
	virtual float GetInitialSP() override { return ACharacter_Parent::GetInitialSP(); }
	virtual float GetCurrentInitialSP() override { return ACharacter_Parent::GetCurrentInitialSP(); }
	virtual void UpdateCurrentSP() override { ACharacter_Parent::UpdateCurrentSP(); }
	virtual float Respawn_bar() override { return ACharacter_Parent::Respawn_bar(); }

	// 총구 함수
	virtual FVector SetMuzzlePos() override { return FVector::ZeroVector; }
	virtual FRotator SetMuzzleRot() override { return FRotator::ZeroRotator; }


	// 개별 함수
	// 영혼 수집 함수
	virtual void StartCollect();
	virtual void Collecting();
	virtual void EndCollect();

	// 인간 Collect Progress Bar - 함수
	virtual float GetPerCollect() { return PerCollect; }
};
