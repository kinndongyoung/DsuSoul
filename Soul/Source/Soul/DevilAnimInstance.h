#pragma once

#include "Soul.h"
#include "Animation/AnimInstance.h"
#include "DevilAnimInstance.generated.h"

UCLASS()
class SOUL_API UDevilAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UDevilAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float CurrentPawnSpeed; // Ground 스테이트의 애니메이션 전환 값
								// CurrentPawnSpeed =< 0 : Idle
								// CurrentPawnSpeed  > 0 : Walk
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool IsInAir;
};
