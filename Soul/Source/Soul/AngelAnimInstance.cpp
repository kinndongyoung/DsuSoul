#include "AngelAnimInstance.h"

UAngelAnimInstance::UAngelAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> ANGEL_ATTACK(TEXT("/Game/ParagonSerath/Characters/Heroes/Serath/Animations/Primary_Attack_A_Medium_Montage.Primary_Attack_A_Medium_Montage"));
	if (ANGEL_ATTACK.Succeeded())
	{
		AngelAttack = ANGEL_ATTACK.Object;
	}
}

void UAngelAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void UAngelAnimInstance::AngelMotangeAttack()
{
	if (!Montage_IsPlaying(AngelAttack))
	{
		Montage_Play(AngelAttack, 1.0f);
	}
}