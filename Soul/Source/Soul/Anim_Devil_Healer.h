#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "Anim_Devil_Healer.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAttackDelegate);

UCLASS()
class SOUL_API UAnim_Devil_Healer : public UAnimInstance_Parent
{
	GENERATED_BODY()

public:
	UAnim_Devil_Healer();
	void NativeUpdateAnimation(float DeltaSeconds);
	void DevilHealerAttack();

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAcces = true))
		UAnimMontage* D_Healer_Attack;
};
