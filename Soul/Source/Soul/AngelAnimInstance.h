#pragma once

#include "Soul.h"
#include "AnimInstance_Parent.h"
#include "AngelAnimInstance.generated.h"

UCLASS()
class SOUL_API UAngelAnimInstance : public UAnimInstance_Parent
{
	GENERATED_BODY()

public:
	UAngelAnimInstance();
	void NativeUpdateAnimation(float DeltaSeconds);
};
