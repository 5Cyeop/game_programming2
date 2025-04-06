#include "player.h"

void GetPlayerName(Player player)
{
	printf("%s\n", player.name);
}

void SetPlayerName(Player* playerP)
{
	printf("Setting Player Name:");
	char* inputName = malloc(sizeof(inputName));
	scanf_s("%s", inputName, 10);
	(*playerP).name = inputName;
	printf("Player Name: %s\n", inputName);
}

void SetPlayerInput(Player* playerP)
{
	if (_kbhit)
	{
		if (GetAsyncKeyState(VK_UP))
		{
			(*playerP).pos.Y -= 1;
		}

		if (GetAsyncKeyState(VK_DOWN))
		{
			(*playerP).pos.Y += 1;
		}

		if (GetAsyncKeyState(VK_LEFT))
		{
			(*playerP).pos.X -= 1;
		}

		if (GetAsyncKeyState(VK_RIGHT))
		{
			(*playerP).pos.X += 1;
		}

	}
}

void SetPlayer(Player* playerP)
{
	SetPlayerName(playerP);
	SetPlayerInput(playerP);

	printf("�÷��̾� ������ �Ϸ�Ǿ����ϴ�. �����Ϸ��� �ƹ� ��ư�̳� �Է����ּ���\n");
	char press = _getch();
	system("cls");
}

void ShowPlayerInfo(Player* playerP, COORD uiPOS)
{
	GotoXY(uiPOS.X, uiPOS.Y);
	printf("�÷��̾� ����\n");
	GotoXY(uiPOS.X, uiPOS.Y);
	printf("�̸�: %s\n", playerP->name);
	GotoXY(uiPOS.X, uiPOS.Y);
	printf("��ǥ: [%d, %d]\n", playerP->pos.X, playerP->pos.Y);
}