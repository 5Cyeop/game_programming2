#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>
#include "stage.h"

void GotoXY(int x, int y);

void ShowStage(char (*stage)[STAGE_WIDTH + 1], COORD pos);

char ReValueStage(char (*stage)[STAGE_WIDTH + 1], COORD pos);

BOOL MoveStage(char(*stage)[STAGE_WIDTH + 1], COORD playerPos, char exitC);

void NextStage(char(*stage)[STAGE_WIDTH + 1], COORD stagePos);

COORD PlusCOORD(COORD pos1, COORD pos2);

