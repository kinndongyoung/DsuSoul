#include "Anim_Human_Shielder.h"

UAnim_Human_Shielder::UAnim_Human_Shielder()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> H_SHIELDER_ATTACK(TEXT("/Game/ParagonGideon/Characters/Heroes/Gideon/Animations/Primary_Attack_A_Medium_Montage.Primary_Attack_A_Medium_Montage"));
	if (H_SHIELDER_ATTACK.Succeeded())
	{
		H_Shielder_Attack = H_SHIELDER_ATTACK.Object;
	}
}

void UAnim_Human_Shielder::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}
void UAnim_Human_Shielder::Human_Shielder_AttackMontage()
{
	Montage_Play(H_Shielder_Attack, 1.0f);
}