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
	void BeginPlay();
	void Tick(float DeltaTime);
	void PostInitializeComponents();
	void PossessedBy(AController* NewController);
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

public:
	// HUD Ŭ����
	UPROPERTY(VisibleAnywhere, Category = HUD)
	class AHUD_Devil* HUDDevil;

	// �ִϸ��̼� Ŭ����
	UPROPERTY(VisibleAnywhere, Category = AnimInstance)
	class UDevilAnimInstance* AnimDevil;

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

	// �ѱ� �Լ�
	UFUNCTION(BlueprintPure, Category = "Muzzle")
	virtual FVector SetMuzzlePos() override;

	UFUNCTION(BlueprintPure, Category = "Muzzle")
	virtual FRotator SetMuzzleRot() override;
};