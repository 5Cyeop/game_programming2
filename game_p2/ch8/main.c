#include "console.h"
#include "stage.h"
#include "player.h"

int main()
{
	COORD stagePos = { 20, 0 };
	COORD stagePos2 = { 20, 0 };
	GotoXY(10, 10);
	printf("d");

	/*for (int i = 0; i < STAGE_HEIGHT; i++)
	{
		printf("%s\n", stage2[i]);
	}

	printf("\n");*/

	ShowStage(stage1, stagePos);

	COORD tempPos = { 1, 1 };
	char tempChar = ReValueStage(stage1, tempPos);
	printf("ÁÂÇ¥ ¹®ÀÚ °ª: %c\n", tempChar);
	Sleep(1000);

	Player player;

	SetPlayerName(&player);
	GetPlayerName(player);

	COLOR color = RED;
	SelectColor(color);
	ShowPlayerInfo(&player);

	if (MoveStage(stage1, tempPos, '@'))
	{
		//system("cls");
		Sleep(500);
		ShowStage(stage2, stagePos2);
		GotoXY(10 + 20, 10);
		printf("¡Ú");
	}


	while (true)
	{

	}
}