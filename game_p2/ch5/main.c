#include "structp.h"
#include "ui.h"
/*
void ShowPlayerInfo(Player* playerp)
	1. playerp 주소이기 때문에 값에 접근을 해야 함 (역참조연산자 사용)
	2. 구조체의 변수에서 데이터에 접근하는 연산자 (접근연산자 . )	(*playerp).playerName;
	3. *playerp.playerName 연산자의 우선순위가 존재하기 때문에 *(playerp.playerName)*/


int main()
{
	//Ch5Ex();

	setCursorVisible(false);
	GameStart();

	return 0;
}