#include "DevilAnimInstance.h"

UDevilAnimInstance::UDevilAnimInstance()
{

}

void UDevilAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}