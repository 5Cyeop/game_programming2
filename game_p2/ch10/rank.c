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

	//printf("���� : %d, ���� : %d, �̸� : %s\n", order, score, name);

	fclose(fp2);
}

int LoadRank(const char* fileName, Rank rank[])
{
	int count = 0;

	FILE* fptr = fopen(fileName, "r");

	if (fptr == NULL)
	{
		printf("���� ���� ����\n");
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
	printf("| ���� | ���� |    �̸�          |\n");
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
		printf("�ִ� �÷��̾� ���� ���� �ʰ��Ͽ����ϴ�.\n");
	}

}

void AddRankData(Rank rank[], int* order)
{
	if (*order < MAXPLAYER)
	{
		printf("���ο� �÷��̾��� �̸��� �Է��ϼ��� : \n");
		char newName[MAXLENGTH];
		int newScore;

		scanf("%49s", newName);
		printf("������ �Է��ϼ��� : \n");
		scanf("%d", &newScore);

		AddRank(rank, order, newName, newScore);
	}
}

void DeleteRankData(Rank rank[], int* order, int count)
{
	if (count <= 0)
	{
		printf("��ŷ�� �����Ͱ� ��ϵǾ����� �ʽ��ϴ�.\n");
		return;
	}

	if (count >= *order)
	{
		printf("�߸��� �ε����Դϴ�\n");
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
