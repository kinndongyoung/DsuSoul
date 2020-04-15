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
	// �������ͽ�
	bool GiveSoulState;

public:
	// ��ȥ ���� ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Install)
	float PerCollect;
	bool ColletEnd;

	// Ʈ���� //
	bool isTrigger;
	UPROPERTY(VisibleAnywhere, Category = Trigger)
	class AHuman_PaustSoulCase* pt_Trigger;
	
	// HUD Ŭ����
	UPROPERTY(VisibleAnywhere, Category = HUD)
	class AHUD_Human* HUDHuman;

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


	// ���� �Լ�
	// ��ȥ ���� �Լ�
	virtual void StartCollect();
	virtual void Collecting();
	virtual void EndCollect();

	// �ΰ� Collect Progress Bar - �Լ�
	virtual float GetPerCollect() { return PerCollect; }
};
