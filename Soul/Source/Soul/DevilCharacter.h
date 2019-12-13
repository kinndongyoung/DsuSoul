#pragma once

#include "Soul.h"
#include "GameFramework/Character.h"
#include "DevilCharacter.generated.h"

UCLASS()
class SOUL_API ADevilCharacter : public ACharacter
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

public:
	// �������ͽ�
	bool DieState;
	float Status_HP;

	// ���� ����
	FTimerHandle timer;
	bool isFiring;
	bool isTrigger;

public:// ������� //
	// ���� �Լ�
	void StartFire();
	void Fire();
	void StopFire();

private:// ��Ʈ�� ���� //
	void SetControlMode(EControlMode NewControlMode);

	// �ൿ	�Լ�
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);

	// HUD Ŭ����
	UPROPERTY(VisibleAnywhere, Category = HUD)
	class AHUD_Devil* HUD_Devil;

	// �ִϸ��̼� Ŭ����
	UPROPERTY(VisibleAnywhere, Category = AnimInstance)
	class UDevilAnimInstance* DevilAnim;

public:// ī�޶�//	
	// ī�޶� ��ġ������ �ѱ� ������
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* UserCameraArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = BulletClass)
	TSubclassOf<class ADevilWeaponBullet> WeaponBulletClass;
};