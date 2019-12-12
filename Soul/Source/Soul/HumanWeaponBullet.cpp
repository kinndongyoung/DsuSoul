#include "HumanWeaponBullet.h"
#include "HumanCharacter.h"
#include "Engine/Classes/Components/SphereComponent.h"
#include "Engine/Classes/GameFramework/ProjectileMovementComponent.h"

AHumanWeaponBullet::AHumanWeaponBullet()
{
	PrimaryActorTick.bCanEverTick = true;

	// 구체를 단순 콜리전 표현으로 사용
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("HumanBullet"));
	CollisionComponent->OnComponentHit.AddDynamic(this, &AHumanWeaponBullet::OnHit);

	// 구체의 콜리전 반경을 설정
	CollisionComponent->InitSphereRadius(15.0f);
	// 루트 컴포넌트를 콜리전 컴포넌트로 설정
	RootComponent = CollisionComponent;

	// ProjectileMovementComponent 를 사용하여 이 발사체의 운동을 관장
	BulletMoveComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("BulletMoveComponent"));
	BulletMoveComponent->SetUpdatedComponent(CollisionComponent);
	BulletMoveComponent->InitialSpeed = 3000.0;
	BulletMoveComponent->MaxSpeed = 3000.0f;
	BulletMoveComponent->bRotationFollowsVelocity = true;
	BulletMoveComponent->bShouldBounce = true;
	BulletMoveComponent->Bounciness = 0.3f;

	
	// 충돌 후 0.5초 뒤 삭제(기능 안함)
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

// 총알의 속도를 발사 방향으로 초기화시키는 함수
void AHumanWeaponBullet::FireInDirection(const FVector& ShootDirection)
{
	BulletMoveComponent->Velocity = ShootDirection * BulletMoveComponent->InitialSpeed;
}

// 총알에 무언가 맞으면 호출
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
