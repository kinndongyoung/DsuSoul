#pragma once

#include "Soul.h"
#include "Animation/AnimInstance.h"
#include "HumanAnimInstance.generated.h"

UCLASS()
class SOUL_API UHumanAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UHumanAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	bool myPlayer;

private:
	void PlayFire();

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float CurrentPawnSpeed; // Ground 스테이트의 애니메이션 전환 값
							// CurrentPawnSpeed =< 0 : Idle
							// CurrentPawnSpeed  > 0 : Walk
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsInAir;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsFire;

	//모션 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool Is_Walk;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool Is_LayDown;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool Is_idle;
};
