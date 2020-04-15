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
	// ������
	enum class ECharacterJob
	{
		CLASS_INIT,
		CLASS_TANKER,
		CLASS_DEALER,
		CLASS_HEALER
	};
	ECharacterJob CurrentCharJob = ECharacterJob::CLASS_INIT;

	// 1��Ī, 3��Ī
	enum class EControlMode
	{
		TPS, //ThirdPersonShooter
		FPS, //FirstPersonShooter
	};
	EControlMode CurrentControlMode = EControlMode::TPS;

	// 1��Ī, 3��Ī
	enum class ECameraMode
	{
		ZOOM_LEFT,
		ZOOM_RIGHT
	};
	ECameraMode CurrentCameraMode = ECameraMode::ZOOM_RIGHT;

	// ���� ���� - X ��
	enum class EBlinkDirect_PosX
	{
		BLINK_DIR_INIT,
		BLINK_DIR_FORWARD,
		BLINK_DIR_BACK
	};
	EBlinkDirect_PosX CurrentBlinkDir_PosX = EBlinkDirect_PosX::BLINK_DIR_FORWARD;

	// ���� ���� - Z ��
	enum class EBlinkDirect_PosZ
	{
		BLINK_DIR_INIT,
		BLINK_DIR_RIGHT,
		BLINK_DIR_LEFT
	};
	EBlinkDirect_PosZ CurrentBlinkDir_PosZ = EBlinkDirect_PosZ::BLINK_DIR_INIT;

	float ArmLengthTo = 0.0f;      // ĳ���Ϳ� ī�޶� �Ÿ�
	UPROPERTY(EditAnywhere, Category = ArmSpd)
	float ArmLengthSpeed = 0.0f;   // ī�޶� ��ȯ �ӵ�(Zoom ���� �� ���)
	float ArmRotationSpeed = 0.0f; // ī�޶� ȸ�� �ӵ�
	FRotator ArmRotationTo = FRotator::ZeroRotator;
	FVector DirectionToMove = FVector::ZeroVector;

	// ���� ����
	FTimerHandle timer;
	bool isFiring;
	bool User_isHit;
	bool Camera_isHit;
	FHitResult User_OutHit;
	FHitResult Camera_OutHit;
	FVector User_StartVector;
	FVector Camera_StartVector;
	FVector Camera_ForwardVector;
	FVector User_EndVector;
	FVector Camera_EndVector;
	FCollisionQueryParams User_CollisionParams;
	FCollisionQueryParams Camera_CollisionParams;

	// ���� ������� �˸��� bool ��// humanweaponbullet Ŭ�������� �������ش�.
	bool Hit;

	// ��� ����
	bool Is_MaxLookUp;
	bool Is_Zoom;
	bool Is_Walking;

	// ĳ���� �ѹ�
	int Number;

	// �ǰ� ���� ����
	bool TakeHit_State;
	float Regeneration_Interval;
	float TakeHit_State_Interval;

	// ������
	FVector vec;
	float DeathTime;
	float RespawnTime;

	// HUD ����
	float HUD_Rot;
	float HUD_Pos_Y;

	// HP, SP - ����
	float Initial_HP;
	float CurrentHp;
	float Initial_SP;
	float CurrentSP;

	// Skiil - ����
	bool Activate_Skill;

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
	
	// HUD Ŭ���� - TPS
	UPROPERTY(VisibleAnywhere, Category = TPS)
	class UWidgetComponent* WidgetClass_Bar_TPS;

	// HUD Ŭ���� - FPS
	class AHUD_Parent* HUDParent;

	// �ִϸ��̼� Ŭ����
	class UAnimInstance_Parent* AnimParent;

	// ���� ��ų �Ѿ� Ŭ����
	TSubclassOf<class ABullet_Parent> WeaponBulletClass;

public:
	// ���� �Լ�
	// ī�޶� ���� //
	virtual void SetControlMode(EControlMode NewControlMode);
	virtual void Zoom();
	virtual void CameraSwitch();

	// �ൿ	�Լ�
	virtual void ForwardBack(float NewAxisValue);
	virtual void LeftRight(float NewAxisValue);
	virtual void LookUp(float NewAxisValue);
	virtual void Turn(float NewAxisValue);

	// ���� �Լ�
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
	virtual float GetInitialHP() { return Initial_HP; }
	virtual float GetCurrentInitialHP() { return CurrentHp; }
	virtual void UpdateCurrentHP() { CurrentHp = CurrentHp; }
	virtual float GetInitialSP() { return Initial_SP; }
	virtual float GetCurrentInitialSP() { return CurrentSP; }
	virtual void UpdateCurrentSP() { CurrentSP = CurrentSP; }
	virtual float Respawn_bar() { return RespawnTime += 2.0f; }

	// �ѱ� �Լ�
	virtual FVector SetMuzzlePos() { return FVector::ZeroVector; }
	virtual FRotator SetMuzzleRot() { return FRotator::ZeroRotator; }

	// ���� �Լ�
	void UserLineTrace();
	void CameraLineTrace();
};
