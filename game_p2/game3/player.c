#include "player.h"

void GetPlayerName(Player player)
{
	printf("%s\n", player.name);
}

void SetPlayerName(Player* playerP)
{
	printf("Setting Player Name:");
	char* inputName = malloc(sizeof(inputName));
	scanf_s("%s", inputName, 10);
	(*playerP).name = inputName;
	printf("Player Name: %s\n", inputName);
}`