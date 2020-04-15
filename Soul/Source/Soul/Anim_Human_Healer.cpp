#include "Anim_Human_Healer.h"

UAnim_Human_Healer::UAnim_Human_Healer()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> H_HEALER_ATTACK(TEXT("/Game/ParagonLtBelica/Characters/Heroes/Belica/Animations/Primary_Fire_Med_Montage.Primary_Fire_Med_Montage"));
	if (H_HEALER_ATTACK.Succeeded())
	{
		H_Healer_Attack = H_HEALER_ATTACK.Object;
	}
}

void UAnim_Human_Healer::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}
void UAnim_Human_Healer::Human_Healer_AttackMontage()
{
	Montage_Play(H_Healer_Attack, 1.0f);
}