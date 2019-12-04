#pragma once

#include "Soul.h"
#include "GameFramework/Actor.h"
#include "HumanWeapon.generated.h"

UCLASS()
class SOUL_API AHumanWeapon : public AActor
{
	GENERATED_BODY()
	
public:
	AHumanWeapon();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, Category = Weapon)
		USkeletalMeshComponent* Weapon_SKAR4;
};
