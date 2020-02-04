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
	// 1인칭, 3인칭
	enum class EControlMode
	{
		TPS, //ThirdPersonShooter
		FPS  //FirstPersonShooter
	};

	float ArmLengthTo = 0.0f;      // 캐릭터와 카메라 거리
	float ArmLengthSpeed = 0.0f;   // 카메라 전환 속도(Zoom 만들 때 사용)
	float ArmRotationSpeed = 0.0f; // 카메라 회전 속도

public:// 트리거 //
	bool isTrigger;				   
	UPROPERTY(VisibleAnywhere, Category = Trigger)
	class AAngel_InstallTrigger* pt_Trigger;


private:// 컨트롤 관련 //
	void SetControlMode(EControlMode NewControlMode);

	// 행동	함수
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);

	// HUD 클래스
	UPROPERTY(VisibleAnywhere, Category = HUD)
		class AHUD_Angel* HUD_Angel;

	// 애니메이션 클래스
	UPROPERTY(VisibleAnywhere, Category = AnimInstance)
		class UAngelAnimInstance* AngelAnim;

public:
	// 스테이터스
	bool DieState;
	float Status_HP;
	int ammo;

	// 공격 변수
	FTimerHandle timer;
	bool isFiring;
	//
	bool Is_Spirnt;
public:// 무기관련 //
	// 공격 함수
	void StartFire();
	void Fire();
	void StopFire();
	//
	void Sprint();
	void Stop_Sprint();

	// 설치 함수 및 변수
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Install)
	float PerInstall;
	int InstallCount;

	void StartInstall();
	void Installing();
	void EndInstall();

private:// 카메라//	
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
