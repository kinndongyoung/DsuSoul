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

	// �߻�ü�� �ӵ��� �߻� �������� �ʱ�ȭ��Ŵ
	void FireInDirection(const FVector& ShootDirection);

	// �Ѿ��� ���𰡿� ������ ȣ��Ǵ� �Լ�
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse ,const FHitResult& Hit);
	
public:
	// ��ü �ݸ��� ������Ʈ
	UPROPERTY(VisibleDefaultsOnly, Category = Bullet)
	USphereComponent* CollisionComponent;

	// ������Ÿ�� �����Ʈ ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = Movement)
	class UProjectileMovementComponent* BulletMoveComponent;
};