#pragma once
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
	char* playerName;
	COORD pos;
}Player;

typedef struct
{
	char* itemName;
	COORD pos;
	BOOL  haveitem;
}Item;

void ShowItemInfo(Item* itemP);

void GetPlayerInput(Player* playerP);

void ShowPlayer(const Player* playerP);

void SetPos(int x, int y);

void GoXYC(COORD pos);

void Intitem(Player* playerP, Item* itemP);

void ShowAllItemInfo(Item* itemArr[], int length);

void ShowAllItem(Item itemArr[], int length);

BOOL ComPareCOORD(COORD pos1, COORD pos2);