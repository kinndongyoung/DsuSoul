#pragma once

#include "Soul.h"
#include "GameFramework/Character.h"
#include "AngelCharacter.generated.h"

UCLASS()
class SOUL_API AAngelCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AAngelCharacter();

private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	// 1��Ī, 3��Ī
	enum class EControlMode
	{
		TPS, //ThirdPersonShooter
		FPS  //FirstPersonShooter
	};

	float ArmLengthTo = 0.0f;      // ĳ���Ϳ� ī�޶� �Ÿ�
	float ArmLengthSpeed = 0.0f;   // ī�޶� ��ȯ �ӵ�(Zoom ���� �� ���)
	float ArmRotationSpeed = 0.0f; // ī�޶� ȸ�� �ӵ�

public:// Ʈ���� //
	bool isTrigger;				   
	UPROPERTY(VisibleAnywhere, Category = Trigger)
	class AAngel_InstallTrigger* pt_Trigger;


private:// ��Ʈ�� ���� //
	void SetControlMode(EControlMode NewControlMode);

	// �ൿ	�Լ�
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);

	// HUD Ŭ����
	UPROPERTY(VisibleAnywhere, Category = HUD)
		class AHUD_Angel* HUD_Angel;

	// �ִϸ��̼� Ŭ����
	UPROPERTY(VisibleAnywhere, Category = AnimInstance)
		class UAngelAnimInstance* AngelAnim;

public:
	// �������ͽ�
	bool DieState;
	float Status_HP;
	int ammo;

	// ���� ����
	FTimerHandle timer;
	bool isFiring;
	//
	bool Is_Spirnt;
public:// ������� //
	// ���� �Լ�
	void StartFire();
	void Fire();
	void StopFire();
	//
	void Sprint();
	void Stop_Sprint();

	// ��ġ �Լ� �� ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Install)
	float PerInstall;
	int InstallCount;

	void StartInstall();
	void Installing();
	void EndInstall();

private:// ī�޶�//	
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* UserCameraArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;


	//UPROPERTY(EditAnywhere, Category = BulletClass)
	//TSubclassOf<class AAngelWeaponBullet> WeaponBulletClass;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MuzzleOffseet)
	FVector MuzzleOffset;
};
