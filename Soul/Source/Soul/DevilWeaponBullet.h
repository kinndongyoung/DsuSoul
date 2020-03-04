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
	void BeginPlay();

public:
	// �Ѿ��� �߻��ϴ� ����
	void FireActor(ACharacter_Parent* pt_FireChar);

	// �߻�ü�� �ӵ��� �߻� �������� �ʱ�ȭ��Ŵ
	void FireInDirection(const FVector& ShootDirection);

	// �Ѿ��� ���𰡿� ������ ȣ��Ǵ� �Լ�
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
};
