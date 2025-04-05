#include "game.h"


void GameStart()
{
	Player player;
	COORD playerPos = { 10, 10 };
	SetPlayer(&player);

	COORD stagePos = { 20, 0 };
	ShowStage(stage1, stagePos);

	player.pos = PlusCOORD(playerPos, stagePos);

	COORD playerStatus = { 60, 0 };

	while (true)
	{
		GotoXY(player.pos.X, player.pos.Y);
		printf("  ");

		SetPlayerInput(&player);
		GotoXY(player.pos.X, player.pos.Y);
		printf("¡Ú");

		COORD playerStagePos = { player.pos.X - stagePos.X, player.pos.Y - stagePos.Y };

		if (MoveStage(stage1, playerStagePos, '@'))
		{
			NextStage(stage2, stagePos);
		}
		
		ShowPlayerInfo(&player, playerStatus);

		Sleep(100);
	}
}

int main()
{
	GameStart();
}