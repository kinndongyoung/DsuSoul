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


	int ammo;
	float Pos;
	// 공격 변수
	FTimerHandle timer;
	bool isFiring;
	bool isTrigger;
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
	void Death();
	void Respawn();

public:// 컨트롤 관련 //
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

	//악마 hp,sp - 변수
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
//악마 hp,sp
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