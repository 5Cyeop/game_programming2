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
}

void SelectColor(COLOR color)
{
	switch (color)
	{
		case RED:
			printf("RED");
			break;
		case GREEN:
			printf("GREEN");
			break;
		case BLUE:
			printf("BLUE");
			break;
	}
}

void ShowPlayerInfo(Player* playerP)
{
	if (playerP == NULL)
	{
		return;
	}

	printf("%s ", playerP->name);
}
