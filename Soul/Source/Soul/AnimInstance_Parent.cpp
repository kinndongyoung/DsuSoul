#include "AnimInstance_Parent.h"

UAnimInstance_Parent::UAnimInstance_Parent()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
	myPlayer = false;

	Rotate_Value = FRotator(0.0f, 0.0f, 0.0f);
	Translation_Value = FVector(0.0f, 0.0f, 0.0f);
	Scale_Value = FVector(0.0f, 0.0f, 0.0f);

	GetInstanceAssetPlayerTimeFromEndFraction(0);
}

void UAnimInstance_Parent::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	//if (myPlayer)//나중에 서버 쓸때 주석처리 풀 것
	//{
		if (::IsValid(Pawn))
		{
			CurrentPawnSpeed = Pawn->GetVelocity().Size();
			auto Character = Cast<ACharacter>(Pawn);
			if (Character)
				IsInAir = Character->GetMovementComponent()->IsFalling();
		}
	//}
}