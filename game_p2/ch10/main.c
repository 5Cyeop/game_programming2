#include "rank.h"
#include <conio.h>
#include <stdlib.h>

int main()
{
	//printf("1. ���� ����\n");
	FileSaveTemp();
	//printf("2. ���� �б�\n");
	FileLoadTemp();
	//printf("3. ����ü ����\n");

	Rank ranks[MAXPLAYER];
	int order = 0;
	AddRank(ranks, &order, "Bear", 100);
	AddRank(ranks, &order, "Candy", 150);
	AddRank(ranks, &order, "Dog", 250);
	AddRank(ranks, &order, "Dog", 75);


	printf("�����͸� �ҷ����� ���Դϴ�.\n");

	for (int i = 0; i < 10; i++)
	{
		printf("...");
		Sleep(100);
	}

	printf("..............\n");
	Sleep(1000);
	order = LoadRank(RANKFILEPATH, ranks);
	printf("�ε��� �Ϸ�Ǿ����ϴ�. Ű�� �Է����ּ���\n");
	_getch();
	system("cls");
	
	int firstRank = 0;

	while (1)
	{
		printf("1.������ �߰� 2.��ŷ Ȯ�� 3.���α׷� ���� 4.������ ���� 5.1���� ���� ���\n");
		int input = 0;
		scanf("%d", &input);

		switch (input)
		{
			case 1:
				system("cls");
				AddRankData(ranks, &order);
				system("cls");
				break;

			case 2:
				system("cls");
				PrintRanking(ranks, order);
				_getch();
				system("cls");
				break;

			case 3:
				return;

			case 4:
				DeleteRankData(ranks, &order, 1);
				break;

			case 5:
				firstRank = FindMaxIndex(ranks, order);
				printf("��ŷ 1���� �̸�: %s, ����: %d\n", ranks[firstRank].name, ranks[firstRank].score);
				break;

			default:
				printf("�߸��� �Է��Դϴ�.\n");
				_getch();
				system("cls");
				break;


		}
	}

	FileSave(RANKFILEPATH, ranks, order);
}