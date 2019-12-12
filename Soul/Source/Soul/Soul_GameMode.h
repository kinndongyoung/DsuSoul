#pragma once

#include "Soul.h"
#include "GameFramework/GameModeBase.h"
#include "Soul_GameMode.generated.h"

UCLASS()
class SOUL_API ASoul_GameMode : public AGameModeBase
{
	GENERATED_BODY()
	ASoul_GameMode();

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
	virtual void PostLogin(APlayerController* NewPlayer) override;
};