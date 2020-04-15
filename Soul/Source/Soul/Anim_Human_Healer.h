#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "Anim_Human_Healer.generated.h"

UCLASS()
class SOUL_API UAnim_Human_Healer : public UAnimInstance_Parent
{
	GENERATED_BODY()
	
public:
	UAnim_Human_Healer();
	void NativeUpdateAnimation(float DeltaSeconds);
};
