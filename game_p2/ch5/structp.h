#pragma once
#include <stdio.h>
#include <Windows.h>

void Ch5Ex();

typedef struct _Pos
{
	int posX, posY;
}POS;

typedef struct _Player
{
	char* playerName;
	POS   playerPos;	//posX, posY

}Player;

void ShowPlayerInfo1(Player player);

void ShowPlayerInfo2(const Player* playerp);

void ShowPlayerInfo3(const Player* playerp);

void ChangePlayerPos(Player* playerp);
