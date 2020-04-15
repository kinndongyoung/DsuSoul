#include "Anim_Angel_Shielder.h"

UAnim_Angel_Shielder::UAnim_Angel_Shielder()
{

}

void UAnim_Angel_Shielder::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}
