#include "Anim_Devil_Shielder.h"

UAnim_Devil_Shielder::UAnim_Devil_Shielder()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> D_SHIELDER_ATTACK(TEXT("/Game/ParagonSevarog/Characters/Heroes/Sevarog/Animations/Swing1_Medium_Montage.Swing1_Medium_Montage"));
	if (D_SHIELDER_ATTACK.Succeeded())
	{
		D_Shielder_Attack = D_SHIELDER_ATTACK.Object;
	}
}

void UAnim_Devil_Shielder::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void UAnim_Devil_Shielder::DevilShielderAttack()
{
	Montage_Play(D_Shielder_Attack, 1.0f);
}

