#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "Anim_Devil_Shielder.generated.h"

//DECLARE_MULTICAST_DELEGATE(FOnAttackDelegate);

UCLASS()
class SOUL_API UAnim_Devil_Shielder : public UAnimInstance_Parent
{
	GENERATED_BODY()
	
public:
	UAnim_Devil_Shielder();
	void NativeUpdateAnimation(float DeltaSeconds);
};
