#include "HumanWeaponBullet.h"
#include "HumanCharacter.h"
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

void AHumanWeaponBullet::BeginPlay()
{
	Super::BeginPlay();

}

void AHumanWeaponBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
			AHumanCharacter* pt_HumanBullet = Cast<AHumanCharacter>(OtherActor);
			pt_HumanBullet->CurrentHp -= 20.0f;
			pt_HumanBullet->CurrentSP += 0.01f;
			printf("HP : %.2f", pt_HumanBullet->CurrentHp);
			printf("SP : %.2f", pt_HumanBullet->CurrentSP);
			if (pt_HumanBullet == nullptr)print("null");
		}
		printf("Hit Actor : %s", *Hit.GetActor()->GetName());
		printf("Hit Bone : %s", *Hit.BoneName.ToString());
		printf("Point : %s", *Hit.ImpactPoint.ToString());
		printf("Normal : %s", *Hit.ImpactNormal.ToString());
	}
	else print("No Hit");
}
