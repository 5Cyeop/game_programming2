#include "structp.h"

void Ch5Ex()
{
	POS playerPos = { 5, 5 };
	playerPos.posX = 3;
	playerPos.posY = 4;

	Player player1 = { "AAA", playerPos };

	printf("name: %s, pos: [%d, %d]\n", player1.playerName, playerPos.posX, playerPos.posY);
	ShowPlayerInfo1(player1);
	ShowPlayerInfo2(&player1);
	ChangePlayerPos(&player1);
	ShowPlayerInfo3(&player1);
}

void ShowPlayerInfo1(Player player)
{
	printf("1name: %s, pos: [%d, %d]\n", player.playerName, player.playerPos.posX, player.playerPos.posY);
}

void ShowPlayerInfo2(const Player* playerp)
{
	printf("2name: %s, pos: [%d, %d]\n", (*playerp).playerName, (*playerp).playerPos.posX, (*playerp).playerPos.posY);
}

void ShowPlayerInfo3(const Player* playerp)
{
	printf("3name: %s, pos: [%d, %d]", playerp->playerName, playerp->playerPos.posX, playerp->playerPos.posY);
}

void ChangePlayerPos(Player* playerp)
{
	playerp->playerPos.posX += 1;
	playerp->playerPos.posY += 1;
}
