#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "HumanAnimInstance.generated.h"

UCLASS()
class SOUL_API UHumanAnimInstance : public UAnimInstance_Parent
{
	GENERATED_BODY()

public:
	UHumanAnimInstance();
	void NativeUpdateAnimation(float DeltaSeconds);
};