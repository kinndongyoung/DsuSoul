#pragma once

#include "Soul.h"
#include "GameFramework/GameModeBase.h"
#include "Soul_GameMode.generated.h"

UCLASS()
class SOUL_API ASoul_GameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	// ���� enum
	enum class ESelectCharacter
	{
		// �ΰ�
		HUMAN_TANKER,
		HUMAN_ATTACKER,
		HUMAN_HEALER,
		// �Ǹ�
		DEVIL_TANKER,
		DEVIL_ATTACKER,
		DEVIL_HEALER,
		// õ��
		ANGEL_TANKER,
		ANGEL_ATTACKER,
		ANGEL_HEALER,
	};
	ESelectCharacter e_SelectChar;

public:
	ASoul_GameMode();
	virtual void PostLogin(APlayerController* NewPlayer) override;
};
