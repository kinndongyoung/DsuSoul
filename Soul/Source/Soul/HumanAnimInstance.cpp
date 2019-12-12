#include "HumanAnimInstance.h"

UHumanAnimInstance::UHumanAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
	myPlayer = false;
	LayAniTime = 0.1f;
	SitAniTime = 0.5f;
	GetInstanceAssetPlayerTimeFromEndFraction(0);
}

void UHumanAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (myPlayer)
	{
		if (::IsValid(Pawn))
		{
			CurrentPawnSpeed = Pawn->GetVelocity().Size();

			auto Character = Cast<ACharacter>(Pawn);
			if (Character)
				IsInAir = Character->GetMovementComponent()->IsFalling();
		}
	}
	
}