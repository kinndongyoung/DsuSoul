#include "HumanWeaponBullet.h"
#include "HumanCharacter.h"
#include "DevilCharacter.h"
#include "AngelCharacter.h"
#include "Engine/Classes/Components/SphereComponent.h"
#include "Engine/Classes/GameFramework/ProjectileMovementComponent.h"

AHumanWeaponBullet::AHumanWeaponBullet()
{
	PrimaryActorTick.bCanEverTick = true;

	// �ݸ��� ����
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CapsuleComponent"));

	// ��Ʈ ������Ʈ�� �ݸ��� ������Ʈ�� ����
	RootComponent = CollisionComponent;

	// �ݸ��� ����
	CollisionComponent->OnComponentHit.AddDynamic(this, &AHumanWeaponBullet::OnHit);
	CollisionComponent->InitSphereRadius(1.5f);
	CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("HumanBullet"));		

	// ProjectileMovementComponent �� ����Ͽ� �� �߻�ü�� ��� ����
	BulletMoveComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("BulletMoveComponent"));
	BulletMoveComponent->SetUpdatedComponent(CollisionComponent);
	BulletMoveComponent->InitialSpeed = 3000.0;
	BulletMoveComponent->MaxSpeed = 3000.0f;
	BulletMoveComponent->bRotationFollowsVelocity = false;
	BulletMoveComponent->bShouldBounce = false;
	BulletMoveComponent->Bounciness = 0.0f;
	BulletMoveComponent->ProjectileGravityScale = 0.0f;
}

// �Ѿ��� �ӵ��� �߻� �������� �ʱ�ȭ��Ű�� �Լ�
void AHumanWeaponBullet::FireInDirection(const FVector& ShootDirection)
{
	BulletMoveComponent->Velocity = ShootDirection * BulletMoveComponent->InitialSpeed;
}

// �Ѿ˿� ���� ������ ȣ��
void AHumanWeaponBullet::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this && OtherActor != HumanChar)
	{
		if (OtherActor->ActorHasTag(FName(TEXT("Human_Character"))))
		{
			AHumanCharacter* pt_HumanChar = Cast<AHumanCharacter>(OtherActor);
			if (pt_HumanChar == nullptr) print("null");
			
			if (pt_HumanChar->CurrentHp > 0.0f) // �������� �Ѿ� ���ߴ� �۾���*********
			{
				pt_HumanChar->CurrentHp -= 10.0f;
				pt_HumanChar->Hit = true;
			}
			else print("Other Actor HP = 0");

			if (HumanChar->CurrentSP < 100.0f) HumanChar->CurrentSP += 2.0f;
			else print("Other Actor SP = 100");

			printf("HP : %.2f", pt_HumanChar->CurrentHp);
			printf("SP : %.2f", HumanChar->CurrentSP);
		}
		else if (OtherActor->ActorHasTag(FName(TEXT("Devil_Character"))))
		{
			ADevilCharacter* pt_DevilChar = Cast<ADevilCharacter>(OtherActor);
			if (pt_DevilChar == nullptr) print("null");
		
			pt_DevilChar->CurrentHp -= 5;
		}
		else if (OtherActor->ActorHasTag(FName(TEXT("Angel_Character"))))
		{
			AAngelCharacter* pt_AngelChar = Cast<AAngelCharacter>(OtherActor);
			if (pt_AngelChar == nullptr) print("null");
			
			pt_AngelChar->Status_HP -= 5;
		}
		else print("Didn't Hit Character");		
	}
	else if (OtherActor == HumanChar) print("Hit Self");
	else print("No Hit Human Bullet");

	//printf("Hit Actor : %s", *Hit.GetActor()->GetName());
	//printf("Hit Bone : %s", *Hit.BoneName.ToString());
	//printf("Point : %s", *Hit.ImpactPoint.ToString());
	//printf("Normal : %s", *Hit.ImpactNormal.ToString());

	Destroy();
}
