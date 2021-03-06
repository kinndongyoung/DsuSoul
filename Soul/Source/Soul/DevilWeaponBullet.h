#pragma once

#include "Soul.h"
#include "Bullet_Parent.h"
#include "DevilWeaponBullet.generated.h"

UCLASS()
class SOUL_API ADevilWeaponBullet : public ABullet_Parent
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = HUD_class)
	class AHUD_Devil* HUD_Devil;

public:
	UPROPERTY(VisibleAnywhere, Category = DevilActor)
	class ADevilCharacter* DevilChar;

public:	
	ADevilWeaponBullet();

protected:
	virtual void BeginPlay() override;

public:
	// 총알을 발사하는 액터
	virtual void FireActor(ACharacter_Parent* pt_FireChar) override;

	// 발사체의 속도를 발사 방향으로 초기화시킴
	virtual void FireInDirection(const FVector& ShootDirection) override;

	// 총알이 무언가에 맞으면 호출되는 함수
	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) override;
};
