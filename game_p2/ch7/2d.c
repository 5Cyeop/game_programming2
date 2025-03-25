#include "2d.h"

void ShowLe()
{
	//printf("2차원 배열");

	int arr1[4][2] = { { 0, 1 }, { 1, 1 }, { 1, 0 }, { 1, 1 } };

	int arr2[2][4] = { {0, 1, 1, 0}, {1, 0, 0, 0} };


	for (int i = 0; i < 4; i++)
	{
		if (i == 0)
			printf("[arr1]\n");
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 2; i++)
	{
		if (i == 0)
			printf("[arr2]\n");
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	char map1[4][5] = { {'#', '#', '#', '#', '#'}, {'#', ' ', ' ', ' ', '#'}, {'#', ' ', ' ', ' ', '#'}, {'#', '#', '#', '#', '#'} };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%c", map1[i][j]);
		}
		printf("\n");
	}

	
}
