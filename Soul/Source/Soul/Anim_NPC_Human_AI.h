#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "Anim_NPC_Human_AI.generated.h"

//DECLARE_MULTICAST_DELEGATE(FOnAttackDelegate);

UCLASS()
class SOUL_API UAnim_NPC_Human_AI : public UAnimInstance_Parent
{
	GENERATED_BODY()

public:
	UAnim_NPC_Human_AI();
	void NativeUpdateAnimation(float DeltaSeconds);
};
