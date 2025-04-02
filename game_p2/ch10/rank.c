#include "rank.h"

void FileSaveTemp()
{
	FILE* fp = fopen(RANKFILEPATH, "w");
	
	fprintf(fp, "%d %d %s", 1, 100, "Alice");
	fclose(fp);
}

void FileSave(const char* fileName, Rank rank[], int count)
{
	FILE* fptr = fopen(fileName, "w");

	for (int i = 0; i < count; i++)
	{
		fprintf(fptr, "%d %d %s\n", rank[i].order, rank[i].score, rank[i].name);
	}

	fclose(fptr);
}

void FileLoadTemp()
{
	FILE* fp2 = fopen(RANKFILEPATH, "r");


	int order = 0;
	int score = 0;

	char name[MAXLENGTH];

	fscanf(fp2, "%d %d %49s", &order, &score, name);

	//printf("순서 : %d, 점수 : %d, 이름 : %s\n", order, score, name);

	fclose(fp2);
}

int LoadRank(const char* fileName, Rank rank[])
{
	int count = 0;

	FILE* fptr = fopen(fileName, "r");

	if (fptr == NULL)
	{
		printf("파일 열기 실패\n");
		return;
	}

	while (1)
	{
		if (fscanf(fptr, "%d %d %s", &rank[count].order, &rank[count].score, rank[count].name) == EOF)
		{
			break;
		}

		count++;
	}

	fclose(fptr);

	return count;
}

void PrintRanking(Rank rank[], int count)
{
	printf("+------+------+------------------+\n");
	printf("| 순서 | 점수 |    이름          |\n");
	printf("+------+------+------------------+\n");
	for (int i = 0; i < count; i++)
	{
		printf("| %4d | %4d | %-16s |\n", rank[i].order, rank[i].score, rank[i].name);
	}

	printf("+------+------+------------------+\n");
}

void AddRank(Rank rank[], int* order, const char* name, int score)
{
	if (*order < MAXPLAYER)
	{
		rank[*order].order = *order + 1;
		rank[*order].score = score;
		strncpy(rank[*order].name, name, MAXLENGTH - 1);
		rank[*order].name[MAXLENGTH - 1] = '\0';
		(*order)++;
	}
	else
	{
		printf("최대 플레이어 저장 수를 초과하였습니다.\n");
	}

}

void AddRankData(Rank rank[], int* order)
{
	if (*order < MAXPLAYER)
	{
		printf("새로운 플레이어의 이름을 입력하세요 : \n");
		char newName[MAXLENGTH];
		int newScore;

		scanf("%49s", newName);
		printf("점수를 입력하세요 : \n");
		scanf("%d", &newScore);

		AddRank(rank, order, newName, newScore);
	}
}

void DeleteRankData(Rank rank[], int* order, int count)
{
	if (count <= 0)
	{
		printf("랭킹에 데이터가 등록되어있지 않습니다.\n");
		return;
	}

	if (count >= *order)
	{
		printf("잘못된 인덱스입니다\n");
		return;
	}

	for (int i = 0; i < *order; i++)
	{
		rank[i] = rank[i + 1];
	}

	(*order)--;
}

int FindMaxIndex(Rank rank[], int size)
{
	int index = 0;

	int maxValue = rank[0].score;

	for (int i = 1; i < size; i++)
	{
		if (rank[i].score > maxValue)
		{
			maxValue = rank[i].score;
			index = i;
		}
	}

	return index;
}
