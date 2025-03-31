#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _People
{
	char Name[4];
	int age;
}People;

typedef struct _Score
{
	char Name[4];
	int score;
}Score;

int main()
{
	FILE* fp = fopen("example2.txt", "w");
	FILE* fp1 = fopen("rank.txt", "w");
	

	fputs("BBB 100\n", fp);

	People people1 = { "CCC", 15 };
	fprintf(fp, "%s %d", people1.Name, people1.age);
	fclose(fp);

	FILE* fp2 = fopen("example2.txt", "r");
	Score rank = { "DDD", 100 };
	fprintf(fp1, "%s %d", rank.Name, rank.score);
	fclose(fp1);
	
	char name[4];
	int age;
	int maxNum = 2;

	for (int i = 0; i < maxNum; i++)
	{
		fscanf(fp2, "%s %d", name, &age);
		printf("name: %s, age: %d\n", name, age);
	}

	fclose(fp2);

}