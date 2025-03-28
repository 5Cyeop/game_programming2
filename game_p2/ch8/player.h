#pragma once
#include "console.h"

typedef enum _COLOR
{
	RED, GREEN, BLUE

}COLOR;

typedef enum _Race
{
	HUMAN, ORC, TROLL
}Race;


typedef struct _Player
{
	char* name;
	COORD pos;
	Race race;

}Player;


void GetPlayerName(Player player);

void SetPlayerName(Player* playerP);

void SetPlayerInput(Player* playerP);

void SetPlayerRace(Player* playerP);

void SetPlayer(Player* playerP);

void SelectColor(COLOR color);

void ShowPlayerInfo(Player* playerP, COORD uiPOS);