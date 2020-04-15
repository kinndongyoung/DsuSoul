#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "Anim_Devil_Dealer.generated.h"

//DECLARE_MULTICAST_DELEGATE(FOnAttackDelegate);

UCLASS()
class SOUL_API UAnim_Devil_Dealer : public UAnimInstance_Parent
{
	GENERATED_BODY()

public:
	UAnim_Devil_Dealer();
	void NativeUpdateAnimation(float DeltaSeconds);

//	void DevilAttackMontage();
//	void JumpToAttackMontage(int32 NewSection);
//
//public:
//	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAcces = true))
//	UAnimMontage* DevilAttack;
//
//	UFUNCTION()
//	void AnimNotify_Attack();
//
//	FOnAttackDelegate OnAttackCheck;
//
//	FName GetAttackMontangeSectionName(int32 Section);
};
