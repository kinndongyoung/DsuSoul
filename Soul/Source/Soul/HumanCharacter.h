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
		FPS,  //FirstPersonShooter
		NPC
	};
	EControlMode CurrentControlMode = EControlMode::TPS;
	float ArmLengthTo = 0.0f;      // 캐릭터와 카메라 거리
	float ArmLengthSpeed = 0.0f;   // 카메라 전환 속도(Zoom 만들 때 사용)
	float ArmRotationSpeed = 0.0f; // 카메라 회전 속도
	FRotator ArmRotationTo = FRotator::ZeroRotator;
	FVector DirectionToMove = FVector::ZeroVector;

public:// 트리거 //
	bool isTrigger;
	UPROPERTY(VisibleAnywhere, Category = Trigger)
	class AHuman_PaustSoulCase* pt_Trigger;

public:// 컨트롤 관련 //
	void SetControlMode(EControlMode NewControlMode);

	// 행동	함수
	void ForwardBack(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);

	// HUD 클래스
	UPROPERTY(VisibleAnywhere, Category = HUD)
	class AHUD_Human* HUD_Human;

	// 애니메이션 클래스
	UPROPERTY(VisibleAnywhere, Category = AnimInstance)
	class UHumanAnimInstance* HumanAnim;

	//인간 hp,sp - 변수
	UPROPERTY(EditAnywhere, Category = "Human HP")
	float Initial_HP;

	UPROPERTY(EditAnywhere, Category = "Human HP")
	float CurrentHp;

	UPROPERTY(EditAnywhere, Category = "Human SP")
	float Initial_SP;

	UPROPERTY(EditAnywhere, Category = "Human SP")
	float CurrentSP;

	//죽음
	UPROPERTY(VisibleAnywhere, Category = Death_bar)
	class AHUD_Human* bar;

	//임시
	float DeathTime;

	float RespawnTime;
	
	//인간 hp,sp - 함수
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

private:// 카메라//	
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* UserCameraArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;	

public:
	// 스테이터스
	bool GiveSoulState;

	// 공격 변수
	FTimerHandle timer;
	bool isFiring;
	int ammo;

	//모션 변수
	bool Is_Zoom;
	bool Is_Walking;
	bool Is_LayDowning;
	
	// 영혼 수집 함수 및 변수
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Install)
	float PerCollect;
	bool ColletEnd;
	void StartCollect();
	void Collecting();
	void EndCollect();
	
	// 무기관련 //
	// 공격 함수
	void StartFire();
	void Fire();
	void StopFire();
	void Zoom();

	//모션 함수
	void Walk();
	void Stop_Walk();
	void SitDownFunc();
	void LayDownFunc();
	void ReloadFunc();
	void Stop_ReloadFunc();
	void Death();
	void Respawn();

public:
	// 카메라 위치에서의 총구 오프셋
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MuzzleOffseet)
	FVector MuzzleOffset;

	// 총구 오프셋
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MuzzleOffseet)
	FVector MuzzleLocation;

private:
	// 총알을 스폰시킬 무기 클래스z
	UPROPERTY(EditAnywhere, Category = BulletClass)
	class AHumanWeapon* UserWeapon;

	// 스폰 시킬 총알 클래스
	UPROPERTY(EditAnywhere, Category = BulletClass)
	TSubclassOf<class AHumanWeaponBullet> WeaponBulletClass;
};
