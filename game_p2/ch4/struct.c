#include "struct.h"

void StructEx()
{
	struct Pos playerPos = { 1, 1 };

	printf("[%d, %d]", playerPos.xPos, playerPos.yPos);
}
