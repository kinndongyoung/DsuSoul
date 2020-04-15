#pragma once

#include "Soul.h"
#include "Character_Parent.h"
#include "DevilCharacter.generated.h"

UCLASS()
class SOUL_API ADevilCharacter : public ACharacter_Parent
{
	GENERATED_BODY()

public:
	ADevilCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	// HUD 클래스
	UPROPERTY(VisibleAnywhere, Category = HUD)
	class AHUD_Devil* HUDDevil;

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

	// 콤보 공격 - 상속화 가능성 있음
	virtual void OnAttackMontageEnd(UAnimMontage* Montage, bool bInterrupted);

	virtual void DevilAttackStart();
	virtual void DevilAttackEnd();

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	bool IsAtttacking;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	bool CanNextCombo;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	bool IsComboInputOn;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	int32 CurrentCombo;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	int32 MaxCombo;
};