#pragma once

#include "Soul.h"
#include "GameFramework/Actor.h"
#include "DevilWeaponBullet.generated.h"

UCLASS()
class SOUL_API ADevilWeaponBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	ADevilWeaponBullet();

private:
	virtual void BeginPlay() override;

public:
	// 발사체의 속도를 발사 방향으로 초기화시킴
	void FireInDirection(const FVector& ShootDirection);

	// 총알이 무언가에 맞으면 호출되는 함수
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

public:
	// 구체 콜리전 컴포넌트
	UPROPERTY(VisibleDefaultsOnly, Category = Bullet)
	USphereComponent* CollisionComponent;

	// 프로젝타일 무브먼트 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Movement)
	class UProjectileMovementComponent* BulletMoveComponent;

	UPROPERTY(VisibleAnywhere, Category = HUD_class)
	class AHUD_Devil* HUD_Devil;
};
