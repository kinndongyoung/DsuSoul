#include "Anim_Devil_Dealer.h"

UAnim_Devil_Dealer::UAnim_Devil_Dealer()
{
//	static ConstructorHelpers::FObjectFinder<UAnimMontage> DEVIL_ATTACK(TEXT("/Game/ParagonCountess/Characters/Heroes/Countess/Animations/Primary_Attack_A_Normal_Montage.Primary_Attack_A_Normal_Montage"));
//	if (DEVIL_ATTACK.Succeeded())
//	{
//		DevilAttack = DEVIL_ATTACK.Object;
//	}
}

void UAnim_Devil_Dealer::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}

//void UAnim_Devil_Dealer::DevilAttackMontage()
//{
//	Montage_Play(DevilAttack, 1.0f);
//}
//
//void UAnim_Devil_Dealer::AnimNotify_Attack()
//{
//	OnAttackCheck.Broadcast();
//}
//
//void UAnim_Devil_Dealer::JumpToAttackMontage(int32 NewSection)
//{
//	ABCHECK(Montage_IsPlaying(DevilAttack));
//	Montage_JumpToSection(GetAttackMontangeSectionName(NewSection), DevilAttack);
//}
//
//FName UAnim_Devil_Dealer::GetAttackMontangeSectionName(int32 Section)
//{
//	ABCHECK(FMath::IsWithinInclusive<int32>(Section, 1, 3), NAME_None);
//	return FName(*FString::Printf(TEXT("Attack%d"), Section));
//}