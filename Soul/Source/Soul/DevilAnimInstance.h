#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "DevilAnimInstance.generated.h"

UCLASS()
class SOUL_API UDevilAnimInstance : public UAnimInstance_Parent
{
	GENERATED_BODY()

public:
	UDevilAnimInstance();
	void NativeUpdateAnimation(float DeltaSeconds);
};
