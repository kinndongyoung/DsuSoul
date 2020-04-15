#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "Anim_Human_Dealer.generated.h"

UCLASS()
class SOUL_API UAnim_Human_Dealer : public UAnimInstance_Parent
{
	GENERATED_BODY()
	
public:
	UAnim_Human_Dealer();
	void NativeUpdateAnimation(float DeltaSeconds);
};
