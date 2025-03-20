#pragma once
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "structp.h"

void GameStart();


void InputPlayer(Player* playerPosP);

void Setcur(int x, int y);

void ShowPlayerInfo(const Player* playerPosP);