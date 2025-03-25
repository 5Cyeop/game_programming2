#include "stage.h"

char stage1[STAGE_COL][STAGE_ROW + 1] = { "######", "#    #", "#    #", "#    #", "######" };

char stage2[STAGE_COL][STAGE_ROW + 1] = { "######", "#   ##", "# #  #", "##   #", "######" };



void SetStage(STAGE* stageP, int index)
{
	switch (index)
	{
	case 1:
		stageP->name = "forest";
		stageP->map = stage1;
		break;

	case 2:
		stageP->name = "little forest";
		stageP->map = stage2;
		break;

	default:
		printf("잘못된 스테이지 번호입니다.\n");
		break;
	}
}
