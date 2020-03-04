#include "AngelAnimInstance.h"

UAngelAnimInstance::UAngelAnimInstance()
{

}

void UAngelAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}