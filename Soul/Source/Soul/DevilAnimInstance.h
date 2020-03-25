#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "DevilAnimInstance.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackDelegate);

UCLASS()
class SOUL_API UDevilAnimInstance : public UAnimInstance_Parent
{
	GENERATED_BODY()

public:
	UDevilAnimInstance();
	void NativeUpdateAnimation(float DeltaSeconds);

	void DevilAttackMontage();
	void JumpToAttackMontage(int32 NewSection);

public:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAcces = true))
		UAnimMontage* DevilAttack;

	UFUNCTION()
		void AnimNotify_Attack();

	FOnAttackDelegate OnAttackCheck;

	FName GetAttackMontangeSectionName(int32 Section);
};
