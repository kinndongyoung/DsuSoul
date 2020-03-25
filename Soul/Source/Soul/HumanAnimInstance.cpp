#include "HumanAnimInstance.h"

UHumanAnimInstance::UHumanAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> HUMAN_ATTACK(TEXT("/Game/ParagonTwinblast/Characters/Heroes/TwinBlast/Animations/Primary_Fire_Med_A_Montage.Primary_Fire_Med_A_Montage"));
	if (HUMAN_ATTACK.Succeeded())
	{
		HumanAttack = HUMAN_ATTACK.Object;
	}
}

void UHumanAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void UHumanAnimInstance::HumanMontageAttack()
{
	if (!Montage_IsPlaying(HumanAttack))
	{
		Montage_Play(HumanAttack, 1.0f);
	}
}