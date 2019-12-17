#include "HUD_Devil.h"
#include "Devil_ContractDoc.h"

AHUD_Devil::AHUD_Devil()
{
	PrimaryActorTick.bCanEverTick = true;

	// UI Create & Initialize	
	HumanSoul = 0;
	CollectCount = 0;
	ActivateCount = 0;
}

void AHUD_Devil::HUD_Update()
{
	if (CollectCount == 1)
	{
		if(ActivateCount == 0)
			printf("Contract 1 Soul : %d", HumanSoul);
		else if (ActivateCount == 1)
			print("Contract 1 Soul : Activate");
	}
	else if (CollectCount == 2)
	{
		if (ActivateCount == 0)
		{
			printf("Contract 1 Soul : %d", HumanSoul);
			print("Contract 2 Soul : 0");
		}
		else if (ActivateCount == 1)
		{
			print("Contract 1 Soul : Activate");
			printf("Contract 2 Soul : %d", HumanSoul);
		}
		else if (ActivateCount == 2)
		{
			print("Contract 1 Soul : Activate");
			print("Contract 2 Soul : Activate");
		}
	}

	if (HumanSoul == 3 && CollectCount <= 2 && ActivateCount <= 1)
	{
		ActivateCount++;
		HumanSoul = 0;
	}
}