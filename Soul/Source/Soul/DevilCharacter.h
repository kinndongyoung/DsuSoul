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
	// HUD Ŭ����
	UPROPERTY(VisibleAnywhere, Category = HUD)
	class AHUD_Devil* HUDDevil;

public:
	// ���� �Լ�
	// ī�޶� ���� //
	virtual void SetControlMode(EControlMode NewControlMode) override;
	virtual void Zoom() override;
	virtual void CameraSwitch() override;

	// �ൿ	�Լ�
	virtual void ForwardBack(float NewAxisValue) override;
	virtual void LeftRight(float NewAxisValue) override;
	virtual void LookUp(float NewAxisValue) override;
	virtual void Turn(float NewAxisValue) override;

	// ���� �Լ�
	virtual void StartFire() override;
	virtual void Fire() override;
	virtual void StopFire() override;

	// ��� �Լ�
	virtual void Walk() override;
	virtual void Stop_Walk() override;
	virtual void ReloadFunc() override;
	virtual void Stop_ReloadFunc() override;

	// ������ ����
	virtual void Death() override;
	virtual void Respawn() override;

	// hp,sp - �Լ�
	virtual float GetInitialHP() override { return ACharacter_Parent::GetInitialHP(); }
	virtual float GetCurrentInitialHP() override { return ACharacter_Parent::GetCurrentInitialHP(); }
	virtual void UpdateCurrentHP() override { ACharacter_Parent::UpdateCurrentHP(); }
	virtual float GetInitialSP() override { return ACharacter_Parent::GetInitialSP(); }
	virtual float GetCurrentInitialSP() override { return ACharacter_Parent::GetCurrentInitialSP(); }
	virtual void UpdateCurrentSP() override { ACharacter_Parent::UpdateCurrentSP(); }
	virtual float Respawn_bar() override { return ACharacter_Parent::Respawn_bar(); }

	// �ѱ� �Լ�
	virtual FVector SetMuzzlePos() override { return FVector::ZeroVector; }
	virtual FRotator SetMuzzleRot() override { return FRotator::ZeroRotator; }

	// �޺� ���� - ���ȭ ���ɼ� ����
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