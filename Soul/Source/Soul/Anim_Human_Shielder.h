#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "Anim_Human_Shielder.generated.h"

UCLASS()
class SOUL_API UAnim_Human_Shielder : public UAnimInstance_Parent
{
	GENERATED_BODY()

public:
	UAnim_Human_Shielder();
	void NativeUpdateAnimation(float DeltaSeconds);
};