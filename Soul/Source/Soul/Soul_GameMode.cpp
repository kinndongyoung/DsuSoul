#include "Soul_GameMode.h"
#include "Soul_UserController.h"
#include "Human_Shielder.h"
#include "Human_Dealer.h"
#include "Human_Healer.h"
#include "Devil_Shielder.h"
#include "Devil_Dealer.h"
#include "Devil_Healer.h"
#include "Angel_Shielder.h"
#include "Angel_Dealer.h"
#include "Angel_Healer.h"
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
			DefaultPawnClass = AHuman_Shielder::StaticClass();
			HUDClass = AHUD_Human::StaticClass();
			break;
		case ESelectCharacter::HUMAN_ATTACKER:
			DefaultPawnClass = AHuman_Dealer::StaticClass();
			HUDClass = AHUD_Human::StaticClass();
			break;
		case ESelectCharacter::HUMAN_HEALER:
			DefaultPawnClass = AHuman_Healer::StaticClass();
			HUDClass = AHUD_Human::StaticClass();
			break;
		case ESelectCharacter::DEVIL_TANKER:
			DefaultPawnClass = ADevil_Shielder::StaticClass();
			HUDClass = AHUD_Devil::StaticClass();
			break;
		case ESelectCharacter::DEVIL_ATTACKER:
			DefaultPawnClass = ADevil_Dealer::StaticClass();
			HUDClass = AHUD_Devil::StaticClass();
			break;
		case ESelectCharacter::DEVIL_HEALER:
			DefaultPawnClass = ADevil_Healer::StaticClass();
			HUDClass = AHUD_Devil::StaticClass();
			break;
		case ESelectCharacter::ANGEL_TANKER:
			DefaultPawnClass = AAngel_Shielder::StaticClass();
			HUDClass = AHUD_Angel::StaticClass();
			break;
		case ESelectCharacter::ANGEL_ATTACKER:
			DefaultPawnClass = AAngel_Dealer::StaticClass();
			HUDClass = AHUD_Angel::StaticClass();
			break;
		case ESelectCharacter::ANGEL_HEALER:
			DefaultPawnClass = AAngel_Healer::StaticClass();
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

