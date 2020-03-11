#include "Soul_GameMode.h"
#include "Soul_UserController.h"
#include "HumanCharacter.h"
#include "DevilCharacter.h"
#include "AngelCharacter.h"
#include "HUD_Human.h"
#include "HUD_Angel.h"
#include "HUD_Devil.h"

ASoul_GameMode::ASoul_GameMode()
{
	// �ϴ� ĳ���� �� ���� ����Ʈ �� HUMAN_TANKER �� ����
	e_SelectChar = ESelectCharacter::HUMAN_TANKER;

	// ������� - Game Mode
	// ���� �� ������ GameMode�� ����
	switch (e_SelectChar)
	{
		case ESelectCharacter::HUMAN_TANKER:
			DefaultPawnClass = AHumanCharacter::StaticClass();
			HUDClass = AHUD_Human::StaticClass();
			break;
		case ESelectCharacter::HUMAN_ATTACKER:
			DefaultPawnClass = AHumanCharacter::StaticClass();
			HUDClass = AHUD_Human::StaticClass();
			break;
		case ESelectCharacter::HUMAN_HEALER:
			DefaultPawnClass = AHumanCharacter::StaticClass();
			HUDClass = AHUD_Human::StaticClass();
			break;
		case ESelectCharacter::DEVIL_TANKER:
			DefaultPawnClass = ADevilCharacter::StaticClass();
			HUDClass = AHUD_Devil::StaticClass();
			break;
		case ESelectCharacter::DEVIL_ATTACKER:
			DefaultPawnClass = ADevilCharacter::StaticClass();
			HUDClass = AHUD_Devil::StaticClass();
			break;
		case ESelectCharacter::DEVIL_HEALER:
			DefaultPawnClass = ADevilCharacter::StaticClass();
			HUDClass = AHUD_Devil::StaticClass();
			break;
		case ESelectCharacter::ANGEL_TANKER:
			DefaultPawnClass = AAngelCharacter::StaticClass();
			HUDClass = AHUD_Angel::StaticClass();
			break;
		case ESelectCharacter::ANGEL_ATTACKER:
			DefaultPawnClass = AAngelCharacter::StaticClass();
			HUDClass = AHUD_Angel::StaticClass();
			break;
		case ESelectCharacter::ANGEL_HEALER:
			DefaultPawnClass = AAngelCharacter::StaticClass();
			HUDClass = AHUD_Angel::StaticClass();
			break;
		default:ABLOG_S(Warning); break;
	}
	PlayerControllerClass = ASoul_UserController::StaticClass();
}

void ASoul_GameMode::PostLogin(APlayerController * NewPlayer)
{
	Super::PostLogin(NewPlayer);
}

