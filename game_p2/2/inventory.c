#include "inventory.h"


void ShowInventoryCount(int* inventory)
{
	if (inventory == NULL)
	{
		printf("인벤토리의 주소가 할당되어있지 않습니다.\n");
	}
	else
		printf("인벤토리 최대 수: %d\n", *inventory);
}

void IncreaseInventoryCount(int* inventory, int increaseCount)
{
	*inventory = increaseCount;
}
