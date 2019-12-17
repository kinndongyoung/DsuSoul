#include "HumanWeaponBullet.h"
#include "HumanCharacter.h"
#include "DevilCharacter.h"
#include "AngelCharacter.h"
#include "Engine/Classes/Components/SphereComponent.h"
#include "Engine/Classes/GameFramework/ProjectileMovementComponent.h"

AHumanWeaponBullet::AHumanWeaponBullet()
{
	PrimaryActorTick.bCanEverTick = true;

	// ��ü�� �ܼ� �ݸ��� ǥ������ ���
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("HumanBullet"));
	CollisionComponent->OnComponentHit.AddDynamic(this, &AHumanWeaponBullet::OnHit);

	// ��ü�� �ݸ��� �ݰ��� ����
	CollisionComponent->InitSphereRadius(15.0f);
	// ��Ʈ ������Ʈ�� �ݸ��� ������Ʈ�� ����
	RootComponent = CollisionComponent;

	// ProjectileMovementComponent �� ����Ͽ� �� �߻�ü�� ��� ����
	BulletMoveComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("BulletMoveComponent"));
	BulletMoveComponent->SetUpdatedComponent(CollisionComponent);
	BulletMoveComponent->InitialSpeed = 3000.0;
	BulletMoveComponent->MaxSpeed = 3000.0f;
	BulletMoveComponent->bRotationFollowsVelocity = true;
	BulletMoveComponent->bShouldBounce = true;
	BulletMoveComponent->Bounciness = 0.3f;

	
	// �浹 �� 0.5�� �� ����(��� ����)
	InitialLifeSpan = 0.5f;
}

// �Ѿ��� �ӵ��� �߻� �������� �ʱ�ȭ��Ű�� �Լ�
void AHumanWeaponBullet::FireInDirection(const FVector& ShootDirection)
{
	BulletMoveComponent->Velocity = ShootDirection * BulletMoveComponent->InitialSpeed;
}

// �Ѿ˿� ���� ������ ȣ��
void AHumanWeaponBullet::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this)
	{
		if (OtherActor->ActorHasTag(FName(TEXT("Human_Character"))))
		{
			AHumanCharacter* pt_HumanChar = Cast<AHumanCharacter>(OtherActor);
			pt_HumanChar->CurrentHp -= 10.0f;
			pt_HumanChar->CurrentSP += 0.01f;

			printf("HP : %.2f", pt_HumanChar->CurrentHp);
			printf("SP : %.2f", pt_HumanChar->CurrentSP);

			//if (pt_HumanChar->Status_HP <= 0 && HUD_Devil->ActivateCount < 2 && HUD_Devil->CollectCount > 0)
			//	HUD_Devil->HumanSoul++;

			if (pt_HumanChar == nullptr)print("null");
		}
		else if (OtherActor->ActorHasTag(FName(TEXT("Devil_Character"))))
		{
			ADevilCharacter* pt_DevilChar = Cast<ADevilCharacter>(OtherActor);
			pt_DevilChar->Status_HP -= 5;

			if (pt_DevilChar == nullptr)print("null");
		}
		else if (OtherActor->ActorHasTag(FName(TEXT("Angel_Character"))))
		{
			AAngelCharacter* pt_AngelChar = Cast<AAngelCharacter>(OtherActor);
			pt_AngelChar->Status_HP -= 5;

			if (pt_AngelChar == nullptr)print("null");
		}

		//printf("Hit Actor : %s", *Hit.GetActor()->GetName());
		//printf("Hit Bone : %s", *Hit.BoneName.ToString());
		//printf("Point : %s", *Hit.ImpactPoint.ToString());
		//printf("Normal : %s", *Hit.ImpactNormal.ToString());
	}
	else print("No Hit Human Bullet");
}
