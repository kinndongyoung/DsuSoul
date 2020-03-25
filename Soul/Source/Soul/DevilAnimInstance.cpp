#include "DevilAnimInstance.h"

UDevilAnimInstance::UDevilAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> DEVIL_ATTACK(TEXT("/Game/ParagonCountess/Characters/Heroes/Countess/Animations/Primary_Attack_A_Normal_Montage.Primary_Attack_A_Normal_Montage"));
	if (DEVIL_ATTACK.Succeeded())
	{
		DevilAttack = DEVIL_ATTACK.Object;
	}
}

void UDevilAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}

void UDevilAnimInstance::DevilAttackMontage()
{
	Montage_Play(DevilAttack, 1.0f);
}

void UDevilAnimInstance::AnimNotify_Attack()
{
	OnAttackCheck.Broadcast();
}

void UDevilAnimInstance::JumpToAttackMontage(int32 NewSection)
{
	ABCHECK(Montage_IsPlaying(DevilAttack));
	Montage_JumpToSection(GetAttackMontangeSectionName(NewSection), DevilAttack);
}

FName UDevilAnimInstance::GetAttackMontangeSectionName(int32 Section)
{
	ABCHECK(FMath::IsWithinInclusive<int32>(Section, 1, 3), NAME_None);
	return FName(*FString::Printf(TEXT("Attack%d"), Section));
}