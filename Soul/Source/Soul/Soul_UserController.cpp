#include "Soul_UserController.h"
#include "Blueprint/UserWidget.h"

void ASoul_UserController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void ASoul_UserController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
}

void ASoul_UserController::BeginPlay()
{
	Super::BeginPlay();

	// ������Ʈ ���� - �Է� �κ��� �޵��� ����
	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
}