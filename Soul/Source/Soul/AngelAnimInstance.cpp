#include "AngelAnimInstance.h"

UAngelAnimInstance::UAngelAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
}

void UAngelAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();

	if (::IsValid(Pawn))
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();

		auto Character = Cast<ACharacter>(Pawn);
		if (Character)
			IsInAir = Character->GetMovementComponent()->IsFalling();
	}
}