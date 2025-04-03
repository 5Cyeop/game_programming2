#define NameLen 20
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>

typedef struct _Item
{
	char name[NameLen];
	int price;

}Item;

void AddShopData(Item shop[], int* shopCount, const char* name, int price)
{
	strncpy(shop[*shopCount].name, name, NameLen);
	shop[*shopCount].price = price;
	(*shopCount)++;
}

void ShowShopTable(Item shop[], int count)
{
	{
		printf("+------+------+------------------+\n");
		printf("| 번호 | 이름 |    가격          |\n");
		printf("+------+------+------------------+\n");
		for (int i = 0; i < count; i++)
		{
			printf("| %4d | %4d | %-16s |\n", i + 1, shop[i].name, shop[i].price);
		}

		printf("+------+------+------------------+\n");
	}
}

void BuyItem(Item item, Item inventory[], int* count)
{
	inventory[*count].price = item.price;
	strncpy(inventory[*count].name, item.name, NameLen);
	(*count)++;
}

void ShowInventoryTable(Item inventory[], int count)
{
	{
		printf("+------+------+------------------+\n");
		printf("| 번호 | 이름 |    가격          |\n");
		printf("+------+------+------------------+\n");
		for (int i = 0; i < count; i++)
		{
			printf("| %4d | %4d | %-16s |\n", i + 1, inventory[i].name, inventory[i].price);
		}

		printf("+------+------+------------------+\n");
	}
}

void ShopPhase(Item shop[], Item inventory[], int count, int* inventoryCount, bool* gameQuit)
{
	printf("상점에 진입하였습니다.\n");
	while (true)
	{
		printf("1.아이템 목록 2.아이템 구매 3.상점을 나간다 4.게임 종료\n");
		int input = 0;
		scanf("%d", &input);
		int itemIndex = 0;

		switch (input)
		{
			case 1:
				ShowShopTable(shop, count);
				break; 

			case 2:
				printf("구입할 아이템 번호를 입력해주세요\n");
				scanf("%d", &itemIndex);
				BuyItem(shop[itemIndex - 1], inventory, inventoryCount);
				break;

			case 3:
				return;

			case 4:
				*gameQuit = true;
				return;
		}
	}
}



int main()
{
	Item Shop[10];
	int shopCount = 0;
	Item Inventory[10];
	int inventoryCount = 0;

	AddShopData(Shop, &shopCount, "롱소드", 200);
	AddShopData(Shop, &shopCount, "나무방패", 150);
	AddShopData(Shop, &shopCount, "단검", 100);
	AddShopData(Shop, &shopCount, "나무몽둥이", 0);
	
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

	printf("게임이 종료되었습니다.\n");
	

}