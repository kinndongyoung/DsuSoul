#include "Bullet_Parent.h"
#include "Character_Parent.h"
#include "Engine/Classes/Components/SphereComponent.h"
#include "Engine/Classes/GameFramework/ProjectileMovementComponent.h"

ABullet_Parent::ABullet_Parent()
{
	PrimaryActorTick.bCanEverTick = true;

	// �ݸ��� ����
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CapsuleComponent"));

	// ��Ʈ ������Ʈ�� �ݸ��� ������Ʈ�� ����
	RootComponent = CollisionComponent;

	// �ݸ��� ����
	CollisionComponent->OnComponentHit.AddDynamic(this, &ABullet_Parent::OnHit);
	CollisionComponent->InitSphereRadius(1.5f);

	// ProjectileMovementComponent �� ����Ͽ� �� �߻�ü�� ��� ����
	BulletMoveComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("BulletMoveComponent"));
	BulletMoveComponent->SetUpdatedComponent(CollisionComponent);
	BulletMoveComponent->InitialSpeed = 10000.0;
	BulletMoveComponent->MaxSpeed = 10000.0f;
	BulletMoveComponent->bRotationFollowsVelocity = false;
	BulletMoveComponent->bShouldBounce = false;
	BulletMoveComponent->Bounciness = 0.0f;
	BulletMoveComponent->ProjectileGravityScale = 0.0f;
}

void ABullet_Parent::BeginPlay()
{
	Super::BeginPlay();
}

// �Ѿ��� �ӵ��� �߻� �������� �ʱ�ȭ��Ű�� �Լ�
void ABullet_Parent::FireInDirection(const FVector& ShootDirection)
{
	BulletMoveComponent->Velocity = ShootDirection * BulletMoveComponent->InitialSpeed;
}


