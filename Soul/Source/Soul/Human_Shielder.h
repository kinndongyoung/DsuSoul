#pragma once

#include "Soul.h"
#include "HumanCharacter.h"
#include "Human_Shielder.generated.h"

UCLASS()
class SOUL_API AHuman_Shielder : public AHumanCharacter
{
	GENERATED_BODY()
	
public:
	AHuman_Shielder();
	

	// �ִϸ��̼� Ŭ����
	UPROPERTY(VisibleAnywhere, Category = AnimInstance)
	class UAnim_Human_Shielder* AnimHuman;

	// ��ų ��� Ƚ��
	int Skill_Count;

	// ��ų ���� Ʈ���̽�
	bool Skill_isHit;
	FHitResult Skill_OutHit;
	FVector Skill_Vector = FVector::ZeroVector;
	FVector Skill_StartVector;
	FVector Skill_ForwardVector;
	FVector Skill_EndVector;
	FCollisionQueryParams Skill_CollisionParams;

protected:
	void BeginPlay() final;
	void Tick(float DeltaTime) final;
	void PostInitializeComponents() final;
	void PossessedBy(AController* NewController) final;
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) final;

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

	// �ѱ� �Լ�
	UFUNCTION(BlueprintPure, Category = "Muzzle")
	FVector SetMuzzlePos() final;

	UFUNCTION(BlueprintPure, Category = "Muzzle")
	FRotator SetMuzzleRot() final;


	// ���� �Լ�
	// ��ȥ ���� �Լ�
	void StartCollect() final;
	void Collecting() final;
	void EndCollect() final;

	// �ΰ� Collect Progress Bar - �Լ�
	UFUNCTION(BlueprintPure, Category = "Human_Shilder PerCollect")
	float GetPerCollect() final;

	// ��ų ��� �Լ�
	void UseSkillFunc();
};
