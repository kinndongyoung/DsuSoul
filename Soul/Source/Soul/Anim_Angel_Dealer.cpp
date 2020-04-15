#include "Anim_Angel_Dealer.h"

UAnim_Angel_Dealer::UAnim_Angel_Dealer()
{

}

void UAnim_Angel_Dealer::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}
