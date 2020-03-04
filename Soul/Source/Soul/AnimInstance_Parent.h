#pragma once

#include "Soul.h"
#include "Animation/AnimInstance.h"
#include "AnimInstance_Parent.generated.h"

UCLASS()
class SOUL_API UAnimInstance_Parent : public UAnimInstance
{
	GENERATED_BODY()

public:
	UAnimInstance_Parent();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	bool myPlayer;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	float CurrentPawnSpeed;		// Ground 스테이트의 애니메이션 전환 값
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
	bool Is_Reload;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool Is_Death;

	// Bone Transform
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Transform, Meta = (AllowPrivateAccess = true))
	FRotator Rotate_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Transform, Meta = (AllowPrivateAccess = true))
	FVector Translation_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Transform, Meta = (AllowPrivateAccess = true))
	FVector Scale_Value;
};
