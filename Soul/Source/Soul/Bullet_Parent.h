#pragma once

#include "Soul.h"
#include "GameFramework/Actor.h"
#include "Bullet_Parent.generated.h"

UCLASS()
class SOUL_API ABullet_Parent : public AActor
{
	GENERATED_BODY()
	
public:	
	ABullet_Parent();

protected:
	virtual void BeginPlay() override;

public:	
	// 총알을 발사하는 액터
	virtual void FireActor(class ACharacter_Parent* pt_FireChar) {};

	// 발사체의 속도를 발사 방향으로 초기화시킴
	virtual void FireInDirection(const FVector& ShootDirection);

	// 총알이 무언가에 맞으면 호출되는 함수
	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {};

public:
	// 구체 콜리전 컴포넌트
	UPROPERTY(VisibleDefaultsOnly, Category = Bullet)
	USphereComponent* CollisionComponent;

	// 프로젝타일 무브먼트 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = Movement)
	class UProjectileMovementComponent* BulletMoveComponent;
};
