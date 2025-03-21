#include "player.h"

int main()
{
	COORD playerPos = { 0, 0 };
	Player player = { "Name", playerPos };

	COORD itemAPos = { 6, 6 };
	Item itemA = { "A", itemAPos, false };

	COORD itemBPos = { 10, 10 };
	Item itemB = { "B", itemBPos, false };

	Item GameItems[2] = { &itemA, &itemB };


	while (true)
	{
		system("cls");
		GetPlayerInput(&player);
		ShowPlayer(&player);
		GoXYC(itemAPos);
		printf("££");
		Intitem(&player, &itemA);
		ShowItemInfo(&itemA);
		//ShowAllItemInfo
		Sleep(100);
	}

	return 0;
}