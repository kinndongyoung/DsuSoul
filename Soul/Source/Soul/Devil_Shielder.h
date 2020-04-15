#pragma once

#include "Soul.h"
#include "DevilCharacter.h"
#include "Devil_Shielder.generated.h"

UCLASS()
class SOUL_API ADevil_Shielder : public ADevilCharacter
{
	GENERATED_BODY()

public:
	ADevil_Shielder();

protected:
	void BeginPlay() final;
	void Tick(float DeltaTime) final;
	void PostInitializeComponents() final;
	void PossessedBy(AController* NewController) final;
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) final;

public:
	// �ִϸ��̼� Ŭ����
	UPROPERTY(VisibleAnywhere, Category = AnimInstance)
	class UAnim_Devil_Shielder* AnimDevil;

public:
	// ���� �Լ�
	// ī�޶� ���� //
	void SetControlMode(EControlMode NewControlMode) final;
	void Zoom() final;
	void CameraSwitch() final;

	// �ൿ	�Լ�
	void ForwardBack(float NewAxisValue) final;
	void LeftRight(float NewAxisValue) final;
	void LookUp(float NewAxisValue) final;
	void Turn(float NewAxisValue) final;

	// ���� �Լ�
	void StartFire() final;
	void Fire() final;
	void StopFire() final;

	// ��� �Լ�
	void Walk() final;
	void Stop_Walk() final;
	void ReloadFunc() final;
	void Stop_ReloadFunc() final;

	// ������ ����
	void Death() final;
	void Respawn() final;

	// hp,sp - �Լ�
	UFUNCTION(BlueprintPure, Category = "HP")
	float GetInitialHP() final { return ADevilCharacter::GetInitialHP(); }

	UFUNCTION(BlueprintPure, Category = "HP")
	float GetCurrentInitialHP() final { return ADevilCharacter::GetCurrentInitialHP(); }

	UFUNCTION(BlueprintCallable, Category = "HP")
	void UpdateCurrentHP() final { ADevilCharacter::UpdateCurrentHP(); }

	UFUNCTION(BlueprintPure, Category = "SP")
	float GetInitialSP() final { return ADevilCharacter::GetInitialSP(); }

	UFUNCTION(BlueprintPure, Category = "SP")
	float GetCurrentInitialSP() final { return ADevilCharacter::GetCurrentInitialSP(); }

	UFUNCTION(BlueprintCallable, Category = "SP")
	void UpdateCurrentSP() final { ADevilCharacter::UpdateCurrentSP(); }

	UFUNCTION(BlueprintPure, Category = "Death")
	float Respawn_bar() final { return ADevilCharacter::Respawn_bar(); }

	// �ѱ� �Լ�
	UFUNCTION(BlueprintPure, Category = "Muzzle")
	FVector SetMuzzlePos() final;

	UFUNCTION(BlueprintPure, Category = "Muzzle")
	FRotator SetMuzzleRot() final;

	// �޺� ���� - ���ȭ ���ɼ� ����
	UFUNCTION()
	void OnAttackMontageEnd(UAnimMontage* Montage, bool bInterrupted) override;

	void DevilAttackStart() final;
	void DevilAttackEnd() final;
};
