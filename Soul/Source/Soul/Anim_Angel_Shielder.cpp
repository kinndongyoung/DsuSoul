#include "Anim_Angel_Shielder.h"

UAnim_Angel_Shielder::UAnim_Angel_Shielder()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> A_SHIELDER_ATTACK(TEXT("/Game/ParagonFengMao/Characters/Heroes/FengMao/Animations/Melee_A_Med_Montage.Melee_A_Med_Montage"));
	if (A_SHIELDER_ATTACK.Succeeded())
	{
		A_Sheilder_Attack = A_SHIELDER_ATTACK.Object;
	}
}

void UAnim_Angel_Shielder::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}
void UAnim_Angel_Shielder::Angel_Shielder_Attack_Montage()
{
	Montage_Play(A_Sheilder_Attack, 1.0f);
}