#include "ui.h"

void GameStart()
{
	POS		playerPos = { 0, 0 };
	Player	myPlayer = { "Name", playerPos };
	while (true)
	{
		InputPlayer(&myPlayer);
		ShowPlayerInfo(&myPlayer);
		Sleep(50);
	}
}


void InputPlayer(Player* playerPosP)
{
	Setcur(playerPosP->playerPos.posX, playerPosP->playerPos.posY);
	printf("  ");

	if (_kbhit)
	{
		if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			playerPosP->playerPos.posX -= 2;
		}

		else if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			playerPosP->playerPos.posX += 2;
		}

		else if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			playerPosP->playerPos.posY -= 1;
		}

		else if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			playerPosP->playerPos.posY += 1;
		}
	}
}

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void Setcur(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ShowPlayerInfo(const Player* playerPosP)
{
	Setcur(50, 1);
	printf("Player Information");

	Setcur(50, 3);
	printf("Name: %s", playerPosP->playerName);

	Setcur(50, 4);
	printf("PosX: %d, PosY: %d", playerPosP->playerPos.posX, playerPosP->playerPos.posY);

	Setcur(playerPosP->playerPos.posX, playerPosP->playerPos.posY);
	printf("£À");


}
