#include "console.h"

void GotoXY(int x, int y)
{
	COORD pos = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ShowStage(char(*stage)[STAGE_WIDTH + 1], COORD pos)
{
	for (int i = 0; i < STAGE_HEIGHT; i++)
	{
		GotoXY(pos.X, pos.Y + i);
		printf("%s", stage[i]);
	}



	
}

char ReValueStage(char(*stage)[STAGE_WIDTH + 1], COORD pos)
{
	char returnValue = ' ';

	returnValue = stage[pos.Y][pos.X];

	return returnValue;
}

BOOL MoveStage(char(*stage)[STAGE_WIDTH + 1], COORD playerPos, char exitC)
{
	char stageChar = ReValueStage(stage, playerPos);

	if (stageChar == exitC)
	{
		printf("탈출이 가능합니다.\n");

		return true;
	}
	else
	{
		printf("탈출이 불가능합니다.\n");
		return false;
	}
}

void NextStage(char(*stage)[STAGE_WIDTH + 1], COORD stagePos)
{
}
