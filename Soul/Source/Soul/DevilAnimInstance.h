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
		float CurrentPawnSpeed; // Ground ������Ʈ�� �ִϸ��̼� ��ȯ ��
								// CurrentPawnSpeed =< 0 : Idle
								// CurrentPawnSpeed  > 0 : Walk
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool IsInAir;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool IsFire;
	//��� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool Is_Walk;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool Is_LayDown;
};
