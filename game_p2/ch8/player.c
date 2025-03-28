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

void SetPlayerRace(Player* playerP)
{
	printf("Select Player's Race\n");
	printf("1.Human  2.Orc  3.Troll\n");
	int inputNum = -1;
	scanf_s("%d", &inputNum);

	switch (inputNum)
	{
	case 1:
		playerP->race = HUMAN;
		printf("HUMAN\n");
		return;
	case 2:
		playerP->race = ORC;
		printf("ORC\n");
		return;
	case 3:
		playerP->race = TROLL;
		printf("TROLL\n");
		return;
	default:
		SetPlayerRace(playerP);
	}

}

void SetPlayer(Player* playerP)
{
	SetPlayerName(playerP);
	SetPlayerInput(playerP);
	SetPlayerRace(playerP);

	printf("�÷��̾� ������ �Ϸ�Ǿ����ϴ�. �����Ϸ��� �ƹ� ��ư�̳� �Է����ּ���\n");
	char press = _getch();
	system("cls");
}

void SelectColor(COLOR color)
{
	switch (color)
	{
		case RED:
			printf("RED");
			break;
		case GREEN:
			printf("GREEN");
			break;
		case BLUE:
			printf("BLUE");
			break;
	}
}

void ShowPlayerInfo(Player* playerP, COORD uiPOS)
{
	GotoXY(uiPOS.X, uiPOS.Y);
	printf("�÷��̾� ����\n");
	GotoXY(uiPOS.X, uiPOS.Y);
	printf("�̸�: %s\n", playerP->name);
	GotoXY(uiPOS.X, uiPOS.Y);
	printf("����: %d(1.Human 2.Orc 3.Troll)\n", playerP->race);
	GotoXY(uiPOS.X, uiPOS.Y);
	printf("��ǥ: [%d, %d]\n", playerP->pos.X, playerP->pos.Y);
}


