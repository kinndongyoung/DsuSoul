#include "HumanWeaponBullet.h"
#include "Engine/Classes/Components/SphereComponent.h"
#include "Engine/Classes/GameFramework/ProjectileMovementComponent.h"

AHumanWeaponBullet::AHumanWeaponBullet()
{
	PrimaryActorTick.bCanEverTick = true;

	// ��ü�� �ܼ� �ݸ��� ǥ������ ����մϴ�.
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	// ��ü�� �ݸ��� �ݰ��� �����մϴ�.
	CollisionComponent->InitSphereRadius(15.0f);
	// ��Ʈ ������Ʈ�� �ݸ��� ������Ʈ�� �����մϴ�.
	RootComponent = CollisionComponent;

	// ProjectileMovementComponent �� ����Ͽ� �� �߻�ü�� ��� �����մϴ�.
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	ProjectileMovementComponent->InitialSpeed = 3000.0f;
	ProjectileMovementComponent->MaxSpeed = 3000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->Bounciness = 0.3f;

	// �浹 �� 0.5�� �� ����	
	// InitialLifeSpan = 0.5f;
}

void AHumanWeaponBullet::BeginPlay()
{
	Super::BeginPlay();

}

void AHumanWeaponBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// ������Ÿ���� �ӵ��� �߻� �������� �ʱ�ȭ��Ű�� �Լ��Դϴ�.
void AHumanWeaponBullet::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}
