#include "stage.h"
#include "console.h"

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}


char stage_village[STAGE_HEIGHT][STAGE_WIDTH + 1] =
{
	"�����������������������������������������",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                            ��������                                  ��",
	"��                            | |UPGRADE| |                                   ��",
	"��                          ����������                                ��",
	"��                            ��          ��                                  ��",
	"��                            ��          ��                                  ��",
	"��                            ��          ��                                  ��",
	"��                            ����ȡ���                                  ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ����",
	"��                                                                                 |",
	"��                                                                                 |",
	"��                                                                            ����",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"�����������������������������������������"
};


char stage_fild[STAGE_HEIGHT][STAGE_WIDTH + 1] =
{
	"�����������������������������������������",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"��                                                                            ��",
	"�����������������������������������������"
};