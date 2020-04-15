#include "Anim_NPC_Human_AI.h"

UAnim_NPC_Human_AI::UAnim_NPC_Human_AI()
{

}

void UAnim_NPC_Human_AI::NativeUpdateAnimation(float DeltaSeconds)
{
	UAnimInstance_Parent::NativeUpdateAnimation(DeltaSeconds);
	Super::NativeUpdateAnimation(DeltaSeconds);
}
