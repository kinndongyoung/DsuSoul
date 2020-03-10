#pragma once

#include "Soul.h"
#include "Bullet_Parent.h"
#include "HumanWeaponBullet.generated.h"

UCLASS()
class SOUL_API AHumanWeaponBullet : public ABullet_Parent
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = HumanActor)
	class AHumanCharacter* HumanChar;

public:
	AHumanWeaponBullet();

protected:
	virtual void BeginPlay() override;

public:
	// �Ѿ��� �߻��ϴ� ����
	virtual void FireActor(ACharacter_Parent* pt_FireChar) override;

	// �߻�ü�� �ӵ��� �߻� �������� �ʱ�ȭ��Ŵ
	virtual void FireInDirection(const FVector& ShootDirection) override;

	// �Ѿ��� ���𰡿� ������ ȣ��Ǵ� �Լ�
	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) override;
};