
#define NameLength 20

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

typedef struct
{
	char name[NameLength];
	int  price;
}Item;

void AddShopData(Item shop[], int* shopCount, const char* name, int price)
{
	strncpy(shop[*shopCount].name, name, NameLength);
	shop[*shopCount].price = price;
	(*shopCount)++;
}

void ShowShopTable(Item shop[], int count)
{
	printf("+------+------+------------------+\n");
	printf("| 번호 | 가격 |    이름          |\n");
	printf("+------+------+------------------+\n");
	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d | %-16s |\n", i + 1, shop[i].price, shop[i].name);
	}

	printf("+------+------+------------------+\n");

	_getch();
}

void ShowInventoryTable(Item invenotry[], int count)
{
	printf("유저의 인벤토리\n");
	printf("+------+------+------------------+\n");
	printf("| 번호 | 가격 |    이름          |\n");
	printf("+------+------+------------------+\n");
	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d | %-16s |\n", i + 1, invenotry[i].price, invenotry[i].name);
	}
	printf("+------+------+------------------+\n");

	_getch();
}

void BuyItem(Item item, Item inventory[], int* count) 
{
	inventory[*count].price = item.price;
	strncpy(inventory[*count].name, item.name, NameLength);
	(*count)++;
}

void ShopPhase(Item shop[], Item inventory[], int count, int* inventoryCount, bool* gameQuit)
{
	printf("상점이 진입하였습니다.\n");
	while (true)
	{
		printf("1_상점 목록 확인. 2_아이템 구입. 3_상점을 떠난다 4_게임종료\n");
		int input = 0;
		scanf("%d", &input);
		int itemIndex = 0;

		switch (input)
		{
		case 1: ShowShopTable(shop, count); break;
		case 2:
			printf("구입할 아이템 번호 입력\n");
			scanf("%d", &itemIndex);
			BuyItem(shop[itemIndex - 1], inventory, inventoryCount);
			break;
		case 3: return;
		case 4: *gameQuit = true; return;
		}
	}
}



int main()
{
	Item Shop[10];
	int shopCount = 0;
	Item Inventory[10];
	int inventoryCount = 0;

	AddShopData(Shop, &shopCount, "롱소드", 100);
	AddShopData(Shop, &shopCount, "나무방패", 150);
	AddShopData(Shop, &shopCount, "단검", 200);
	AddShopData(Shop, &shopCount, "나무몽둥이", 300);

	bool gameQuit = false; 

	while (1)
	{
		ShopPhase(Shop, Inventory, shopCount, &inventoryCount, &gameQuit);

		ShowInventoryTable(Inventory, inventoryCount);

		if (gameQuit)
		{
			break;
		}
	}

	printf("게임을 종료합니다.\n");

}