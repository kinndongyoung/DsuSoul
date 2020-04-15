#include "Anim_Angel_Healer.h"

UAnim_Angel_Healer::UAnim_Angel_Healer()
{

}

void UAnim_Angel_Healer::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}
