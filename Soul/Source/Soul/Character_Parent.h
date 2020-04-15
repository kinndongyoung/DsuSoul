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
	// 직업군
	enum class ECharacterJob
	{
		CLASS_INIT,
		CLASS_TANKER,
		CLASS_DEALER,
		CLASS_HEALER
	};
	ECharacterJob CurrentCharJob = ECharacterJob::CLASS_INIT;

	// 1인칭, 3인칭
	enum class EControlMode
	{
		TPS, //ThirdPersonShooter
		FPS, //FirstPersonShooter
	};
	EControlMode CurrentControlMode = EControlMode::TPS;

	// 1인칭, 3인칭
	enum class ECameraMode
	{
		ZOOM_LEFT,
		ZOOM_RIGHT
	};
	ECameraMode CurrentCameraMode = ECameraMode::ZOOM_RIGHT;

	// 점멸 방향 - X 축
	enum class EBlinkDirect_PosX
	{
		BLINK_DIR_INIT,
		BLINK_DIR_FORWARD,
		BLINK_DIR_BACK
	};
	EBlinkDirect_PosX CurrentBlinkDir_PosX = EBlinkDirect_PosX::BLINK_DIR_FORWARD;

	// 점멸 방향 - Z 축
	enum class EBlinkDirect_PosZ
	{
		BLINK_DIR_INIT,
		BLINK_DIR_RIGHT,
		BLINK_DIR_LEFT
	};
	EBlinkDirect_PosZ CurrentBlinkDir_PosZ = EBlinkDirect_PosZ::BLINK_DIR_INIT;

	float ArmLengthTo = 0.0f;      // 캐릭터와 카메라 거리
	UPROPERTY(EditAnywhere, Category = ArmSpd)
	float ArmLengthSpeed = 0.0f;   // 카메라 전환 속도(Zoom 만들 때 사용)
	float ArmRotationSpeed = 0.0f; // 카메라 회전 속도
	FRotator ArmRotationTo = FRotator::ZeroRotator;
	FVector DirectionToMove = FVector::ZeroVector;

	// 공격 변수
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

	// 총을 맞춘것을 알리는 bool 값// humanweaponbullet 클래스에서 변경해준다.
	bool Hit;

	// 모션 변수
	bool Is_MaxLookUp;
	bool Is_Zoom;
	bool Is_Walking;

	// 캐릭터 넘버
	int Number;

	// 피격 관련 변수
	bool TakeHit_State;
	float Regeneration_Interval;
	float TakeHit_State_Interval;

	// 리스폰
	FVector vec;
	float DeathTime;
	float RespawnTime;

	// HUD 변수
	float HUD_Rot;
	float HUD_Pos_Y;

	// HP, SP - 변수
	float Initial_HP;
	float CurrentHp;
	float Initial_SP;
	float CurrentSP;

	// Skiil - 변수
	bool Activate_Skill;

	// 총알
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ammo)
	int ammo;

	// 카메라 위치에서의 총구 오프셋
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MuzzleOffset)
	FVector MuzzleOffset;

	// 총구 오프셋
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MuzzleLocation)
	FVector MuzzleLocation;
	
	// 카메라
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* UserCameraArm;
	
	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;
	
	// HUD 클래스 - TPS
	UPROPERTY(VisibleAnywhere, Category = TPS)
	class UWidgetComponent* WidgetClass_Bar_TPS;

	// HUD 클래스 - FPS
	class AHUD_Parent* HUDParent;

	// 애니메이션 클래스
	class UAnimInstance_Parent* AnimParent;

	// 스폰 시킬 총알 클래스
	TSubclassOf<class ABullet_Parent> WeaponBulletClass;

public:
	// 공통 함수
	// 카메라 관련 //
	virtual void SetControlMode(EControlMode NewControlMode);
	virtual void Zoom();
	virtual void CameraSwitch();

	// 행동	함수
	virtual void ForwardBack(float NewAxisValue);
	virtual void LeftRight(float NewAxisValue);
	virtual void LookUp(float NewAxisValue);
	virtual void Turn(float NewAxisValue);

	// 공격 함수
	virtual void StartFire();
	virtual void Fire();
	virtual void StopFire();

	// 모션 함수
	virtual void Walk();
	virtual void Stop_Walk();
	virtual void ReloadFunc();
	virtual void Stop_ReloadFunc();
	
	// 리스폰 관련
	virtual void Death();
	virtual void Respawn();

	//인간 hp,sp - 함수
	virtual float GetInitialHP() { return Initial_HP; }
	virtual float GetCurrentInitialHP() { return CurrentHp; }
	virtual void UpdateCurrentHP() { CurrentHp = CurrentHp; }
	virtual float GetInitialSP() { return Initial_SP; }
	virtual float GetCurrentInitialSP() { return CurrentSP; }
	virtual void UpdateCurrentSP() { CurrentSP = CurrentSP; }
	virtual float Respawn_bar() { return RespawnTime += 2.0f; }

	// 총구 함수
	virtual FVector SetMuzzlePos() { return FVector::ZeroVector; }
	virtual FRotator SetMuzzleRot() { return FRotator::ZeroRotator; }

	// 개별 함수
	void UserLineTrace();
	void CameraLineTrace();
};
