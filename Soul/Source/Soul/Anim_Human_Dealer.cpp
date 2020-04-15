#include "Anim_Human_Dealer.h"

UAnim_Human_Dealer::UAnim_Human_Dealer()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> H_DEALER_ATTACK(TEXT("/Game/ParagonWraith/Characters/Heroes/Wraith/Animations/Fire_A_Slow_Montage.Fire_A_Slow_Montage"));
	if (H_DEALER_ATTACK.Succeeded())
	{
		H_Dealer_Attack = H_DEALER_ATTACK.Object;
	}
}

void UAnim_Human_Dealer::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}
void UAnim_Human_Dealer::Human_Dealer_AttackMontage()
{
	Montage_Play(H_Dealer_Attack, 1.0f);
}