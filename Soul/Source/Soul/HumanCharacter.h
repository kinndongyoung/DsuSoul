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
	// 1인칭, 3인칭
	enum class EControlMode
	{
		TPS, //ThirdPersonShooter
		FPS  //FirstPersonShooter
	};

	float ArmLengthTo = 0.0f;      // 캐릭터와 카메라 거리
	float ArmLengthSpeed = 0.0f;   // 카메라 전환 속도(Zoom 만들 때 사용)
	float ArmRotationSpeed = 0.0f; // 카메라 회전 속도

public:// 컨트롤 관련 //
	void SetControlMode(EControlMode NewControlMode);

	// 행동	함수
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);

	// 애니메이션 클래스
	UPROPERTY(VisibleAnywhere, Category = AnimInstance)
	class UHumanAnimInstance* HumanAnim;

private:// 카메라//	
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* UserCameraArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;

public:// 무기관련 //
	// 공격 함수
	void StartFire();
	void Fire();
	void StopFire();
	//모션 함수
	void Walk();
	void Stop_Walk();
	void LayDown();
	void Stop_LayDown();


public:
	// 공격 변수
	FTimerHandle timer;
	bool isFiring;

	//모션 변수
	bool Is_Walking;
	bool Is_LayDowning;
	
	// 카메라 위치에서의 총구 오프셋
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	// 총알을 스폰시킬 무기 클래스
	UPROPERTY(EditAnywhere, Category = BulletClass)
	class AHumanWeapon* UserWeapon;

	// 스폰 시킬 총알 클래스
	UPROPERTY(EditAnywhere, Category = BulletClass)
	TSubclassOf<class AHumanWeaponBullet> WeaponBulletClass;
};
