#include "inventory.h"


void ShowInventoryCount(int* inventory)
{
	if (inventory == NULL)
	{
		printf("�κ��丮�� �ּҰ� �Ҵ�Ǿ����� �ʽ��ϴ�.\n");
	}
	else
		printf("�κ��丮 �ִ� ��: %d\n", *inventory);
}

void IncreaseInventoryCount(int* inventory, int increaseCount)
{
	*inventory = increaseCount;
}
