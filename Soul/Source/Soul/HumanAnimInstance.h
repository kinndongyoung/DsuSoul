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

private:
	void PlayFire();

protected:


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float CurrentPawnSpeed; // Ground 스테이트의 애니메이션 전환 값
							// CurrentPawnSpeed =< 0 : Idle
							// CurrentPawnSpeed  > 0 : Walk

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsInAir;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsWallLStand;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsWallRStand;


public:

	inline void SetIsWallLStandFunc(bool b) { IsWallLStand = b;}
	inline bool GetIsWallLStandFunc() { return IsWallLStand; }
	
	inline void SetIsWallRStandFunc(bool b) { IsWallRStand = b; }
	inline bool GetIsWallRStandFunc() { return IsWallRStand; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool IsFire;
};
