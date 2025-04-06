#include "game.h"

void GameStart()
{
	Player player;
	COORD playerPos = { 10, 10 };
	SetPlayer(&player);

	COORD stagePos = { 0, 0 };
	ShowStage(stage_village, stagePos);

	//player.pos = PlusCOORD(playerPos, stagePos);

	COORD playerStatus = { 100, 0 };

	while (true)
	{
		GotoXY(player.pos.X, player.pos.Y);
		printf("  ");

		SetPlayerInput(&player);
		GotoXY(player.pos.X, player.pos.Y);
		printf("&/");

		COORD playerStagePos = { player.pos.X - stagePos.X, player.pos.Y - stagePos.Y };

		if (MoveStage(stage_village, playerStagePos, '|'))
		{
			ShowStage(stage_fild, stagePos);
		}

		ShowPlayerInfo(&player, playerStatus);

		Sleep(100);
	}
}

int main()
{
	GameStart();
}