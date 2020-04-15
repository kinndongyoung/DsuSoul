#include "Anim_Human_Healer.h"

UAnim_Human_Healer::UAnim_Human_Healer()
{

}

void UAnim_Human_Healer::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}
