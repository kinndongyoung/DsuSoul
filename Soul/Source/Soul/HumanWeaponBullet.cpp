#include "HumanWeaponBullet.h"
#include "HumanCharacter.h"
#include "DevilCharacter.h"
#include "AngelCharacter.h"

AHumanWeaponBullet::AHumanWeaponBullet()
{
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent->InitSphereRadius(1.5f);
	CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("HumanBullet"));
}

void AHumanWeaponBullet::BeginPlay()
{
	ABullet_Parent::BeginPlay();
	Super::BeginPlay();	
}

// 총알을 발사하는 액터
void AHumanWeaponBullet::FireActor(ACharacter_Parent* pt_FireChar)
{
	ABullet_Parent::FireActor(dynamic_cast<AHumanCharacter*>(pt_FireChar));
	HumanChar = dynamic_cast<AHumanCharacter*>(pt_FireChar);
}

// 총알의 속도를 발사 방향으로 초기화시키는 함수
void AHumanWeaponBullet::FireInDirection(const FVector& ShootDirection)
{
	ABullet_Parent::FireInDirection(ShootDirection);
}

// 총알에 무언가 맞으면 호출
void AHumanWeaponBullet::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	ABullet_Parent::OnHit(HitComponent, OtherActor, OtherComponent, NormalImpulse, Hit);

	// 충돌 대상이 나 자신 또는 인간 캐릭터이면 충돌 안하도록함
	if (OtherActor != this && OtherActor != HumanChar)
	{
		// 액터의 태그명으로 충돌 대상 확인
		if (OtherActor->ActorHasTag(FName(TEXT("Human_Character"))))
			print("I can't hit Human");
		else if (OtherActor->ActorHasTag(FName(TEXT("Devil_Character"))))
		{
			ADevilCharacter* pt_DevilChar = Cast<ADevilCharacter>(OtherActor);
			if (pt_DevilChar == nullptr) print("null");
		
			if (pt_DevilChar->CurrentHp > 0.0f) // 서버에서 총알 맞추는 작업중*********
			{
				// HP 감소
				pt_DevilChar->CurrentHp -= 10.0f;
				//pt_DevilChar->Hit = true;
			}
			else print("Other Actor HP = 0");

			// SP 증가
			if (HumanChar->CurrentSP < 100.0f) HumanChar->CurrentSP += 2.0f;
			else print("Other Actor SP = 100");

			printf("HP : %.2f", pt_DevilChar->CurrentHp);
			printf("SP : %.2f", HumanChar->CurrentSP);
		}
		else if (OtherActor->ActorHasTag(FName(TEXT("Angel_Character"))))
		{
			AAngelCharacter* pt_AngelChar = Cast<AAngelCharacter>(OtherActor);
			if (pt_AngelChar == nullptr) print("null");
		
			if (pt_AngelChar->CurrentHp > 0.0f) // 서버에서 총알 맞추는 작업중*********
			{
				// HP 감소
				pt_AngelChar->CurrentHp -= 10.0f;
				pt_AngelChar->Hit = true;
			}
			else print("Other Actor HP = 0");
		
			// SP 증가
			if (HumanChar->CurrentSP < 100.0f) HumanChar->CurrentSP += 2.0f;
			else print("Other Actor SP = 100");
		
			printf("HP : %.2f", pt_AngelChar->CurrentHp);
			printf("SP : %.2f", HumanChar->CurrentSP);
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
