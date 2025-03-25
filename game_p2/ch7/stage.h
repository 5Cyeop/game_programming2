#pragma once
#include <stdio.h>
#define STAGE_COL 5
#define STAGE_ROW 6



typedef struct _STAGE
{
	char* name;
	char (*map)[STAGE_ROW + 1];
}STAGE;

void SetStage(STAGE* stageP, int index);