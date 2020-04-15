#include "Anim_Angel_Healer.h"

UAnim_Angel_Healer::UAnim_Angel_Healer()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> A_HEALER_ATTACK(TEXT("/Game/ParagonSerath/Characters/Heroes/Serath/Animations/Primary_Attack_A_Medium_Montage.Primary_Attack_A_Medium_Montage"));
	if (A_HEALER_ATTACK.Succeeded())
	{
		A_Healer_Attack = A_HEALER_ATTACK.Object;
	}
}

void UAnim_Angel_Healer::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}
void UAnim_Angel_Healer::Angel_Healer_Attack_montage()
{
	Montage_Play(A_Healer_Attack, 1.0f);
}