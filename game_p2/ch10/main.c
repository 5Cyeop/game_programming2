#include "rank.h"
#include <conio.h>
#include <stdlib.h>

int main()
{
	//printf("1. 파일 저장\n");
	FileSaveTemp();
	//printf("2. 파일 읽기\n");
	FileLoadTemp();
	//printf("3. 구조체 구현\n");

	Rank ranks[MAXPLAYER];
	int order = 0;
	AddRank(ranks, &order, "Bear", 100);
	AddRank(ranks, &order, "Candy", 150);
	AddRank(ranks, &order, "Dog", 250);
	AddRank(ranks, &order, "Dog", 75);


	printf("데이터를 불러오는 중입니다.\n");

	for (int i = 0; i < 10; i++)
	{
		printf("...");
		Sleep(100);
	}

	printf("..............\n");
	Sleep(1000);
	order = LoadRank(RANKFILEPATH, ranks);
	printf("로딩이 완료되었습니다. 키를 입력해주세요\n");
	_getch();
	system("cls");
	
	int firstRank = 0;

	while (1)
	{
		printf("1.데이터 추가 2.랭킹 확인 3.프로그램 종료 4.데이터 삭제 5.1위의 정보 출력\n");
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
				printf("랭킹 1위의 이름: %s, 점수: %d\n", ranks[firstRank].name, ranks[firstRank].score);
				break;

			default:
				printf("잘못된 입력입니다.\n");
				_getch();
				system("cls");
				break;


		}
	}

	FileSave(RANKFILEPATH, ranks, order);
}