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
	// 1인칭, 3인칭
	enum class EControlMode
	{
		TPS, //ThirdPersonShooter
		FPS  //FirstPersonShooter
	};

	float ArmLengthTo = 0.0f;      // 캐릭터와 카메라 거리
	float ArmLengthSpeed = 0.0f;   // 카메라 전환 속도(Zoom 만들 때 사용)
	float ArmRotationSpeed = 0.0f; // 카메라 회전 속도

public:
	// 스테이터스
	bool DieState;
	float Status_HP;

	// 공격 변수
	FTimerHandle timer;
	bool isFiring;
	bool isTrigger;

public:// 무기관련 //
	// 공격 함수
	void StartFire();
	void Fire();
	void StopFire();

private:// 컨트롤 관련 //
	void SetControlMode(EControlMode NewControlMode);

	// 행동	함수
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);

	// HUD 클래스
	UPROPERTY(VisibleAnywhere, Category = HUD)
	class AHUD_Devil* HUD_Devil;

	// 애니메이션 클래스
	UPROPERTY(VisibleAnywhere, Category = AnimInstance)
	class UDevilAnimInstance* DevilAnim;

public:// 카메라//	
	// 카메라 위치에서의 총구 오프셋
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* UserCameraArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = BulletClass)
	TSubclassOf<class ADevilWeaponBullet> WeaponBulletClass;
};