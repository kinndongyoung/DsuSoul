#include "HumanWeapon.h"

AHumanWeapon::AHumanWeapon()
{
	PrimaryActorTick.bCanEverTick = true;

	// Weapon Initialize
	Weapon_SKAR4 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WEAPON_SKAR4"));
	RootComponent = Weapon_SKAR4;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_HUMANWEAPON_SKAR4(TEXT("/Game/FPS_Weapon_Bundle/Weapons/Meshes/AR4/SK_AR4.SK_AR4"));

	if (SK_HUMANWEAPON_SKAR4.Succeeded())
		Weapon_SKAR4->SetSkeletalMesh(SK_HUMANWEAPON_SKAR4.Object);

	Weapon_SKAR4->SetCollisionProfileName(TEXT("NoCollision"));
}

void AHumanWeapon::BeginPlay()
{
	Super::BeginPlay();

}

void AHumanWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

