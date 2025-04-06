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

	printf("플레이어 설정이 완료되었습니다. 진행하려면 아무 버튼이나 입력해주세요\n");
	char press = _getch();
	system("cls");
}

void ShowPlayerInfo(Player* playerP, COORD uiPOS)
{
	GotoXY(uiPOS.X, uiPOS.Y);
	printf("플레이어 정보\n");
	GotoXY(uiPOS.X, uiPOS.Y);
	printf("이름: %s\n", playerP->name);
	GotoXY(uiPOS.X, uiPOS.Y);
	printf("좌표: [%d, %d]\n", playerP->pos.X, playerP->pos.Y);
}