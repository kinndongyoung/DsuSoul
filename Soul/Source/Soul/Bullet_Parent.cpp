#include "Bullet_Parent.h"
#include "Character_Parent.h"
#include "Engine/Classes/Components/SphereComponent.h"
#include "Engine/Classes/GameFramework/ProjectileMovementComponent.h"

ABullet_Parent::ABullet_Parent()
{
	PrimaryActorTick.bCanEverTick = true;

	// 콜리전 생성
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CapsuleComponent"));

	// 루트 컴포넌트를 콜리전 컴포넌트로 설정
	RootComponent = CollisionComponent;

	// 콜리전 설정
	CollisionComponent->OnComponentHit.AddDynamic(this, &ABullet_Parent::OnHit);
	CollisionComponent->InitSphereRadius(1.5f);

	// ProjectileMovementComponent 를 사용하여 이 발사체의 운동을 관장
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

// 총알의 속도를 발사 방향으로 초기화시키는 함수
void ABullet_Parent::FireInDirection(const FVector& ShootDirection)
{
	BulletMoveComponent->Velocity = ShootDirection * BulletMoveComponent->InitialSpeed;
}


