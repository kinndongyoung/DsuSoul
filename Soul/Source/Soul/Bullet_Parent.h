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
	// �Ѿ��� �߻��ϴ� ����
	virtual void FireActor(class ACharacter_Parent* pt_FireChar) {};

	// �߻�ü�� �ӵ��� �߻� �������� �ʱ�ȭ��Ŵ
	virtual void FireInDirection(const FVector& ShootDirection);

	// �Ѿ��� ���𰡿� ������ ȣ��Ǵ� �Լ�
	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {};

public:
	// ��ü �ݸ��� ������Ʈ
	UPROPERTY(VisibleDefaultsOnly, Category = Bullet)
	USphereComponent* CollisionComponent;

	// ������Ÿ�� �����Ʈ ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = Movement)
	class UProjectileMovementComponent* BulletMoveComponent;
};
