#include "DevilWeaponBullet.h"
#include "HUD_Devil.h"
#include "HumanCharacter.h"
#include "DevilCharacter.h"
#include "AngelCharacter.h"
#include "Engine/Classes/Components/SphereComponent.h"
#include "Engine/Classes/GameFramework/ProjectileMovementComponent.h"

ADevilWeaponBullet::ADevilWeaponBullet()
{
	PrimaryActorTick.bCanEverTick = true;

	// ��ü�� �ܼ� �ݸ��� ǥ������ ���
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("DevilBullet"));
	CollisionComponent->OnComponentHit.AddDynamic(this, &ADevilWeaponBullet::OnHit);

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

void ADevilWeaponBullet::BeginPlay()
{
	Super::BeginPlay();
	HUD_Devil = Cast<AHUD_Devil>(GetWorld()->GetFirstPlayerController()->GetHUD());
}

// �Ѿ��� �ӵ��� �߻� �������� �ʱ�ȭ��Ű�� �Լ�
void ADevilWeaponBullet::FireInDirection(const FVector& ShootDirection)
{
	BulletMoveComponent->Velocity = ShootDirection * BulletMoveComponent->InitialSpeed;
}

// �Ѿ˿� ���� ������ ȣ��
void ADevilWeaponBullet::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
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

			if (pt_HumanChar->CurrentHp <= 0 && pt_HumanChar->GiveSoulState == false && 
				HUD_Devil->ActivateCount < 2 && HUD_Devil->CollectCount > 0)
			{
				pt_HumanChar->GiveSoulState = true;
				HUD_Devil->HumanSoul++;
			}				

			if (pt_HumanChar == nullptr)print("null");
		}
		else if (OtherActor->ActorHasTag(FName(TEXT("Angel_Character"))))
		{
			AAngelCharacter* AngelChar = Cast<AAngelCharacter>(OtherActor);
			AngelChar->Status_HP -= 5;
		}

		//printf("Hit Actor : %s", *Hit.GetActor()->GetName());
		//printf("Hit Bone : %s", *Hit.BoneName.ToString());
		//printf("Point : %s", *Hit.ImpactPoint.ToString());
		//printf("Normal : %s", *Hit.ImpactNormal.ToString());
	}
	else print("No Hit Devil Bullet");
}