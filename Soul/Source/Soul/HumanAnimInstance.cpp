#include "HumanAnimInstance.h"

UHumanAnimInstance::UHumanAnimInstance()
{

}

void UHumanAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}