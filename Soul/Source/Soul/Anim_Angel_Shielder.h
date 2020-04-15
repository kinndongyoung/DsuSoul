#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "Anim_Angel_Shielder.generated.h"

UCLASS()
class SOUL_API UAnim_Angel_Shielder : public UAnimInstance_Parent
{
	GENERATED_BODY()
	
public:
	UAnim_Angel_Shielder();
	void NativeUpdateAnimation(float DeltaSeconds);
};
