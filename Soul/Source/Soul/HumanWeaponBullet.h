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
	// ���� ���� �Ǵ� ������ ȣ��˴ϴ�.
	virtual void BeginPlay() override;

public:
	// �� ������ ȣ��˴ϴ�.
	virtual void Tick(float DeltaTime) override;

	// �߻�ü�� �ӵ��� �߻� �������� �ʱ�ȭ��ŵ�ϴ�.
	void FireInDirection(const FVector& ShootDirection);

public:
	// ��ü �ݸ��� ������Ʈ�Դϴ�.
	UPROPERTY(VisibleDefaultsOnly, Category = Bullet)
	USphereComponent* CollisionComponent;

	// ������Ÿ�� �����Ʈ ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = Movement)
	class UProjectileMovementComponent* ProjectileMovementComponent;
};
