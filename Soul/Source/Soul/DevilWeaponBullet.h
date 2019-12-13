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
	// �߻�ü�� �ӵ��� �߻� �������� �ʱ�ȭ��Ŵ
	void FireInDirection(const FVector& ShootDirection);

	// �Ѿ��� ���𰡿� ������ ȣ��Ǵ� �Լ�
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

public:
	// ��ü �ݸ��� ������Ʈ
	UPROPERTY(VisibleDefaultsOnly, Category = Bullet)
	USphereComponent* CollisionComponent;

	// ������Ÿ�� �����Ʈ ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = Movement)
	class UProjectileMovementComponent* BulletMoveComponent;

	UPROPERTY(VisibleAnywhere, Category = HUD_class)
	class AHUD_Devil* HUD_Devil;
};
