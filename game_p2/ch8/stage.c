#include "stage.h"
#include "console.h"

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}


char stage1[STAGE_HEIGHT][STAGE_WIDTH + 1] =
{
	"####################",
	"#@                 #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#                  #",
	"####################"

};


char stage2[STAGE_HEIGHT][STAGE_WIDTH + 1] =
{
	"####################",
	"#                  #",
	"#                  #",
	"#      #           #",
	"#        #         #",
	"#    #             #",
	"#          #       #",
	"#                  #",
	"#        #         #",
	"#                  #",
	"#                  #",
	"#       #          #",
	"#     #            #",
	"#         #        #",
	"#                  #",
	"#                  #",
	"#                  #",
	"#           #      #",
	"#                  #",
	"####################"
};


