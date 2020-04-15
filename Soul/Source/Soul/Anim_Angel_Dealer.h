#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "Anim_Angel_Dealer.generated.h"

UCLASS()
class SOUL_API UAnim_Angel_Dealer : public UAnimInstance_Parent
{
	GENERATED_BODY()
	
public:
	UAnim_Angel_Dealer();
	void NativeUpdateAnimation(float DeltaSeconds);
};
