#include "player.h"

void GetPlayerInput(Player* playerP)
{
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			playerP->pos.X -= 2;
		}

		else if (GetAsyncKeyState(VK_RIGHT))
		{
			playerP->pos.X += 2;
		}

		else if (GetAsyncKeyState(VK_UP))
		{
			playerP->pos.Y -= 1;
		}

		else if (GetAsyncKeyState(VK_DOWN))
		{
			playerP->pos.Y += 1;
		}
	}
}

void ShowPlayer(const Player* playerP)
{
	//SetPos(playerP->pos.X, playerP->pos.Y);
	GoXYC(playerP->pos);
	printf("¡Ú");
}

void SetPos(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void GoXYC(COORD pos)
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ShowItemInfo(Item* itemP)
{
	if (itemP->haveitem)
		printf("%s È¹µæ", itemP->itemName);
}

void Intitem(Player* playerP, Item* itemP)
{
	if (ComPareCOORD(playerP->pos, itemP->pos))
	{
		itemP->haveitem = true;
	}
}

void ShowAllItemInfo(Item* itemArr, int length)
{
	for (int i = 0; i < length; i++)
	{
		if ((itemArr + i)->haveitem == true)
		{
			printf("%s ", (itemArr + i)->itemName);
		}

		else
			printf("%s ¹Ìº¸À¯", (itemArr + i)->itemName);
	}
}

BOOL ComPareCOORD(COORD pos1, COORD pos2)
{
	if (pos1.X == pos2.X && pos1.Y == pos2.Y)
	{
		return true;
	}

	else
		return false;
}


