#include "Anim_Human_Shielder.h"

UAnim_Human_Shielder::UAnim_Human_Shielder()
{	

}

void UAnim_Human_Shielder::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}
