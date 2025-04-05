#pragma once
#include "console.h"

typedef struct _Player
{
	char* name;
	COORD pos;

}Player;

void GetPlayerName(Player player);

void SetPlayerName(Player* playerP);

void SetPlayerInput(Player* playerP);

void SetPlayer(Player* playerP);

void ShowPlayerInfo(Player* playerP, COORD uiPOS);