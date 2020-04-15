#include "Anim_Devil_Healer.h"

UAnim_Devil_Healer::UAnim_Devil_Healer()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> D_Healer_ATTACK(TEXT("/Game/ParagonMorigesh/Characters/Heroes/Morigesh/Animations/PrimaryAttack_A_Slow_Montage.PrimaryAttack_A_Slow_Montage"));
	if (D_Healer_ATTACK.Succeeded())
	{
		D_Healer_Attack = D_Healer_ATTACK.Object;
	}
}

void UAnim_Devil_Healer::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);

}

void UAnim_Devil_Healer::DevilHealerAttack()
{
	Montage_Play(D_Healer_Attack, 1.0f);
}

