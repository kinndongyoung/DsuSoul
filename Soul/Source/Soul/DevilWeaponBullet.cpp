#include "DevilWeaponBullet.h"
#include "HumanCharacter.h"
#include "DevilCharacter.h"
#include "AngelCharacter.h"
#include "HUD_Devil.h"

ADevilWeaponBullet::ADevilWeaponBullet()
{
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent->InitSphereRadius(15.0f);
	CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("DevilBullet"));
}

void ADevilWeaponBullet::BeginPlay()
{
	ABullet_Parent::BeginPlay();
	Super::BeginPlay();
	
	HUD_Devil = Cast<AHUD_Devil>(GetWorld()->GetFirstPlayerController()->GetHUD());
}

// �Ѿ��� �߻��ϴ� ����
void ADevilWeaponBullet::FireActor(ACharacter_Parent* pt_FireChar)
{
	ABullet_Parent::FireActor(dynamic_cast<ADevilCharacter*>(pt_FireChar));
	DevilChar = dynamic_cast<ADevilCharacter*>(pt_FireChar);
}

// �Ѿ��� �ӵ��� �߻� �������� �ʱ�ȭ��Ű�� �Լ�
void ADevilWeaponBullet::FireInDirection(const FVector& ShootDirection)
{
	ABullet_Parent::FireInDirection(ShootDirection);
}

// �Ѿ˿� ���� ������ ȣ��
void ADevilWeaponBullet::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	ABullet_Parent::OnHit(HitComponent, OtherActor, OtherComponent, NormalImpulse, Hit);

	// �浹 ����� �� �ڽ� �Ǵ� �Ǹ� ĳ�����̸� �浹 ���ϵ�����
	if (OtherActor != this && OtherActor != DevilChar)
	{
		// ������ �±׸����� �浹 ��� Ȯ��
		if (OtherActor->ActorHasTag(FName(TEXT("Devil_Character"))))
			print("I can't hit Devil");
		else if (OtherActor->ActorHasTag(FName(TEXT("Human_Character"))))
		{
			AHumanCharacter* pt_HumanChar = Cast<AHumanCharacter>(OtherActor);
			if (pt_HumanChar == nullptr) print("null");

			if (pt_HumanChar->CurrentHp > 0.0f) // �������� �Ѿ� ���ߴ� �۾���*********
			{
				// HP ����
				pt_HumanChar->CurrentHp -= 10.0f;
				pt_HumanChar->Hit = true;
			}
			else print("Other Actor HP = 0");

			// SP ����
			if (DevilChar->CurrentSP < 100.0f) DevilChar->CurrentSP += 2.0f;
			else print("Other Actor SP = 100");

			printf("HP : %.2f", pt_HumanChar->CurrentHp);
			printf("SP : %.2f", DevilChar->CurrentSP);

			// �Ǹ��� �ΰ� ��ȥ ���� �ϴ� �κ�
			if (pt_HumanChar->CurrentHp <= 0 && pt_HumanChar->GiveSoulState == false &&
				HUD_Devil->ActivateCount < 2 && HUD_Devil->CollectCount > 0)
			{
				pt_HumanChar->GiveSoulState = true;
				HUD_Devil->HumanSoul++;
			}
		}
		else if (OtherActor->ActorHasTag(FName(TEXT("Angel_Character"))))
		{
			AAngelCharacter* pt_AngelChar = Cast<AAngelCharacter>(OtherActor);
			if (pt_AngelChar == nullptr) print("null");
		
			if (pt_AngelChar->CurrentHp > 0.0f) // �������� �Ѿ� ���ߴ� �۾���*********
			{
				// HP ����
				pt_AngelChar->CurrentHp -= 10.0f;
				pt_AngelChar->Hit = true;
			}
			else print("Other Actor HP = 0");
		
			// SP ����
			if (DevilChar->CurrentSP < 100.0f) DevilChar->CurrentSP += 2.0f;
			else print("Other Actor SP = 100");
		
			printf("HP : %.2f", pt_AngelChar->CurrentHp);
			printf("SP : %.2f", DevilChar->CurrentSP);
		}
		else print("Didn't Hit Character");
	}
	else if (OtherActor == DevilChar) print("Hit Self");
	else print("No Hit Human Bullet");

	//printf("Hit Actor : %s", *Hit.GetActor()->GetName());
	//printf("Hit Bone : %s", *Hit.BoneName.ToString());
	//printf("Point : %s", *Hit.ImpactPoint.ToString());
	//printf("Normal : %s", *Hit.ImpactNormal.ToString());

	Destroy();
}