#pragma once

#include "Soul.h"
#include "GameFramework/Actor.h"
#include "HumanWeaponBullet.generated.h"

UCLASS()
class SOUL_API AHumanWeaponBullet : public AActor
{
	GENERATED_BODY()
	
public:
	AHumanWeaponBullet();

protected:
	// 게임 시작 또는 스폰시 호출
	virtual void BeginPlay() override;

public:
	// 매 프레임 호출
	virtual void Tick(float DeltaTime) override;

	// 발사체의 속도를 발사 방향으로 초기화시킴
	void FireInDirection(const FVector& ShootDirection);

	// 총알이 무언가에 맞으면 호출되는 함수
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse ,const FHitResult& Hit);
	
public:
	// 구체 콜리전 컴포넌트
	UPROPERTY(VisibleDefaultsOnly, Category = Bullet)
	USphereComponent* CollisionComponent;

	// 프로젝타일 무브먼트 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Movement)
	class UProjectileMovementComponent* BulletMoveComponent;
};