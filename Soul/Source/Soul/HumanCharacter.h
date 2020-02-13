#pragma once

#include "Soul.h"
#include "GameFramework/Character.h"
#include "HumanCharacter.generated.h"

UCLASS()
class SOUL_API AHumanCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AHumanCharacter();

public:
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

public:// Ʈ���� //
	bool isTrigger;
	UPROPERTY(VisibleAnywhere, Category = Trigger)
	class AHuman_PaustSoulCase* pt_Trigger;

public:// ��Ʈ�� ���� //
	void SetControlMode(EControlMode NewControlMode);

	// �ൿ	�Լ�
	void ForwardBack(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);

	// HUD Ŭ����
	UPROPERTY(VisibleAnywhere, Category = HUD)
	class AHUD_Human* HUD_Human;

	// �ִϸ��̼� Ŭ����
	UPROPERTY(VisibleAnywhere, Category = AnimInstance)
	class UHumanAnimInstance* HumanAnim;

	//�ΰ� hp,sp - ����
	UPROPERTY(EditAnywhere, Category = "Human HP")
	float Initial_HP;

	UPROPERTY(EditAnywhere, Category = "Human HP")
	float CurrentHp;

	UPROPERTY(EditAnywhere, Category = "Human SP")
	float Initial_SP;

	UPROPERTY(EditAnywhere, Category = "Human SP")
	float CurrentSP;

	//����
	UPROPERTY(VisibleAnywhere, Category = Death_bar)
	class AHUD_Human* bar;

	//�ӽ�
	float DeathTime;
	float RespawnTime;
	
	//�ΰ� hp,sp - �Լ�
	UFUNCTION(BlueprintPure, Category = "Human HP")
	float GetInitialHP() { return Initial_HP; }

	UFUNCTION(BlueprintPure, Category = "Human HP")
	float GetCurrentInitialHP() { return CurrentHp; }

	UFUNCTION(BlueprintCallable, Category = "Human HP")
	void UpdateCurrentHP() { CurrentHp = CurrentHp; }

	UFUNCTION(BlueprintPure, Category = "Human SP")
	float GetInitialSP() { return Initial_SP; }

	UFUNCTION(BlueprintPure, Category = "Human SP")
	float GetCurrentInitialSP() { return CurrentSP; }

	UFUNCTION(BlueprintCallable, Category = "Human SP")
	void UpdateCurrentSP() { CurrentSP = CurrentSP; }

	UFUNCTION(BlueprintPure, Category = "Human Death")
		float Respawn_bar() { return RespawnTime += 2.0f; }
	// �ΰ� Collect Progress Bar - �Լ�
	UFUNCTION(BlueprintPure, Category = "Human PerCollect")
	float GetPerCollect() { return PerCollect; }

private:// ī�޶�//	
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* UserCameraArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;	

public:
	//ĳ���� �ѹ�
	int Number;
	//���� ������� �˸��� bool ��// humanweaponbullet Ŭ�������� �������ش�.
	bool Hit;
	// �������ͽ�
	bool GiveSoulState;

	// ���� ����
	FTimerHandle timer;
	bool isFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Human Bullet")
	int ammo;
	
	FVector vec;

	// ��� ����
	bool Is_Zoom;
	bool Is_Walking;

	// ��ȥ ���� ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Install)
	float PerCollect;
	bool ColletEnd;

	// ��ȥ ���� �Լ�
	void StartCollect();
	void Collecting();
	void EndCollect();
	
	// ������� //
	// ���� �Լ�
	void StartFire();
	void Fire();
	void StopFire();
	void Zoom();

	// ��� �Լ�
	void Walk();
	void Stop_Walk();
	void ReloadFunc();
	void Stop_ReloadFunc();
	void Death();
	void Respawn();

	// �ѱ� �Լ�
	UFUNCTION(BlueprintPure, Category = "Muzzle")
	FVector SetMuzzlePos();
	UFUNCTION(BlueprintPure, Category = "Muzzle")
	FRotator SetMuzzleRot();

public:
	// ī�޶� ��ġ������ �ѱ� ������
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MuzzleOffseet)
	FVector MuzzleOffset;

	// �ѱ� ������
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MuzzleOffseet)
	FVector MuzzleLocation;

private:
	// ���� ��ų �Ѿ� Ŭ����
	UPROPERTY(EditAnywhere, Category = BulletClass)
	TSubclassOf<class AHumanWeaponBullet> WeaponBulletClass;
};
