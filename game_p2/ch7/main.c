#include "2d.h"
#include "stage.h"

int main()
{
	//ShowLe();

	STAGE stage1;
	SetStage(&stage1, 1);
	STAGE stage2;
	SetStage(&stage2, 2);

	printf("stage_name %s\n", stage1.name);
	printf("스테이지1 맵 출력: \n");

	for (int i = 0; i < STAGE_COL; i++)
	{
		printf("%s\n", stage1.map[i]);
	}

	printf("stage_name %s\n", stage2.name);
}