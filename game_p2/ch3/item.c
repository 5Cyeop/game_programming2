#include "item.h"
#define ITEMCOUNT 5

void ShowAllItemInfo()
{
	int itemCount[ITEMCOUNT] = { 1, 2, 3, 4, 5 };
	int itemIndex[ITEMCOUNT] = { 1, 2, 3, 4, 5 };
	char* itemName[ITEMCOUNT] = { "A", "B", "C", "D", "E" };

	for (int i = 0; i < ITEMCOUNT; i++)
	{
		printf("아이템 번호: %d, 아이템 이름: %s, 아이템 수량: %d\n", itemIndex[i], itemName[i], itemCount[i]);
	}
}

void ItemEx()
{

}
