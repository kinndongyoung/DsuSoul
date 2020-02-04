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


	int ammo;
	float Pos;
	// ���� ����
	FTimerHandle timer;
	bool isFiring;
	bool isTrigger;
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
	void Death();
	void Respawn();

public:// ��Ʈ�� ���� //
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

	//�Ǹ� hp,sp - ����
	UPROPERTY(EditAnywhere, Category = "Devil HP")
		float Initial_HP;

	UPROPERTY(EditAnywhere, Category = "Devil HP")
		float CurrentHp;

	UPROPERTY(EditAnywhere, Category = "Devil SP")
		float Initial_SP;

	UPROPERTY(EditAnywhere, Category = "Devil SP")
		float CurrentSP;
	float DeathTime;
	float RespawnTime;
//�Ǹ� hp,sp
	UFUNCTION(BlueprintPure, Category = "Devil HP")
		float GetInitialHP() { return Initial_HP; }

	UFUNCTION(BlueprintPure, Category = "Devil HP")
		float GetCurrentInitialHP() { return CurrentHp; }

	UFUNCTION(BlueprintCallable, Category = "Human HP")
		void UpdateCurrentHP() { CurrentHp = CurrentHp; }

	UFUNCTION(BlueprintPure, Category = "Devil SP")
		float GetInitialSP() { return Initial_SP; }

	UFUNCTION(BlueprintPure, Category = "Devil SP")
		float GetCurrentInitialSP() { return CurrentSP; }

	UFUNCTION(BlueprintCallable, Category = "Human SP")
		void UpdateCurrentSP() { CurrentSP = CurrentSP; }
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