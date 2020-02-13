#include "AngelAnimInstance.h"

UAngelAnimInstance::UAngelAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
	myPlayer = false;
}

void UAngelAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
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