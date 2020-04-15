#include "Anim_Human_Dealer.h"

UAnim_Human_Dealer::UAnim_Human_Dealer()
{	

}

void UAnim_Human_Dealer::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}
