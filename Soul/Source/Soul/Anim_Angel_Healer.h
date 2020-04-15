#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "Anim_Angel_Healer.generated.h"

UCLASS()
class SOUL_API UAnim_Angel_Healer : public UAnimInstance_Parent
{
	GENERATED_BODY()
	
public:
	UAnim_Angel_Healer();
	void NativeUpdateAnimation(float DeltaSeconds);
};
