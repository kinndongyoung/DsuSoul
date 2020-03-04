#pragma once

#include "Soul.h"
#include "GameFramework/Character.h"
#include "Character_Parent.generated.h"

UCLASS()
class SOUL_API ACharacter_Parent : public ACharacter
{
	GENERATED_BODY()

public:
	ACharacter_Parent();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:	
	// 1��Ī, 3��Ī
	enum class EControlMode
	{
		TPS, //ThirdPersonShooter
		FPS,  //FirstPersonShooter
		NPC
	};
	EControlMode CurrentControlMode = EControlMode::TPS;
	float ArmLengthTo = 0.0f;      // ĳ���Ϳ� ī�޶� �Ÿ�
	float ArmLengthSpeed = 0.0f;   // ī�޶� ��ȯ �ӵ�(Zoom ���� �� ���)
	float ArmRotationSpeed = 0.0f; // ī�޶� ȸ�� �ӵ�
	FRotator ArmRotationTo = FRotator::ZeroRotator;
	FVector DirectionToMove = FVector::ZeroVector;

	// �ѱ� ����
	FVector MuzzlePos;
	FRotator MuzzleRot;

	// ���� ����
	FTimerHandle timer;
	bool isFiring;

	// ���� ������� �˸��� bool ��// humanweaponbullet Ŭ�������� �������ش�.
	bool Hit;

	// ��� ����
	bool Is_Zoom;
	bool Is_Walking;

	// ĳ���� �ѹ�
	int Number;

	// ������
	FVector vec;
	float DeathTime;
	float RespawnTime;

	// hp,sp - ����
	float Initial_HP;
	float CurrentHp;
	float Initial_SP;
	float CurrentSP;

	// �Ѿ�
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ammo)
	int ammo;

	// ī�޶� ��ġ������ �ѱ� ������
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MuzzleOffset)
	FVector MuzzleOffset;

	// �ѱ� ������
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MuzzleLocation)
	FVector MuzzleLocation;
	
	// ī�޶�
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* UserCameraArm;
	
	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;
	
	// HUD Ŭ����
	class AHUD_Parent* HUDParent;

	// �ִϸ��̼� Ŭ����
	class UAnimInstance_Parent* AnimParent;

	// ���� ��ų �Ѿ� Ŭ����
	TSubclassOf<class ABullet_Parent> WeaponBulletClass;

public:
	// ���� �Լ�
	// ��Ʈ�� ���� //
	virtual void SetControlMode(EControlMode NewControlMode);

	// �ൿ	�Լ�
	virtual void ForwardBack(float NewAxisValue);
	virtual void LeftRight(float NewAxisValue);
	virtual void LookUp(float NewAxisValue);
	virtual void Turn(float NewAxisValue);

	// ���� �Լ�
	virtual void Zoom();
	virtual void StartFire();
	virtual void Fire();
	virtual void StopFire();

	// ��� �Լ�
	virtual void Walk();
	virtual void Stop_Walk();
	virtual void ReloadFunc();
	virtual void Stop_ReloadFunc();
	
	// ������ ����
	virtual void Death();
	virtual void Respawn();

	//�ΰ� hp,sp - �Լ�
	virtual float GetInitialHP() { return 0; };
	virtual float GetCurrentInitialHP() { return 0; };
	virtual void UpdateCurrentHP() {};
	virtual float GetInitialSP() { return 0; };
	virtual float GetCurrentInitialSP() { return 0; };
	virtual void UpdateCurrentSP() {};
	virtual float Respawn_bar() { return 0; };

	// �ѱ� �Լ�
	virtual FVector SetMuzzlePos() { return FVector::ZeroVector; };
	virtual FRotator SetMuzzleRot() { return FRotator::ZeroRotator; };
};
