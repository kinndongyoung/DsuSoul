#include "Anim_Angel_Dealer.h"

UAnim_Angel_Dealer::UAnim_Angel_Dealer()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> A_DEALER_ATTACK(TEXT("/Game/ParagonSparrow/Characters/Heroes/Sparrow/Animations/Primary_Fire_Med_Montage.Primary_Fire_Med_Montage"));
	if (A_DEALER_ATTACK.Succeeded())
	{
		A_Dealer_Attack = A_DEALER_ATTACK.Object;
	}
}

void UAnim_Angel_Dealer::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}
void UAnim_Angel_Dealer::Angel_Dealer_Attack_Montage()
{
	Montage_Play(A_Dealer_Attack, 1.0f);
}