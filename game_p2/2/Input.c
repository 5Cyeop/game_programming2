#include "Input.h"

void GetPlayerInput(int* x, int* y, int maxX)
{
	if (_kbhit())
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			*x -= 1;
			if (*x <= 0)
			{
				*x = 0;
			}
		}

		else if (GetAsyncKeyState(VK_RIGHT))
		{
			*x += 1;
			if (*x >= maxX)
			{
				*x = maxX;
			}
		}

		else if (GetAsyncKeyState(VK_UP))
		{
			*y -= 1;
			if (*y <= 0)
			{
				*y = 0;
			}
		}

		else if (GetAsyncKeyState(VK_DOWN))
		{
			*y += 1;
		}


	}
}

void InputEx()
{
	int x = 0;
	int y = 0;
	int maxX = 10;

	while (1)
	{
		GetPlayerInput(&x, &y, maxX);

		printf("X: %d, Y: %d\n", x, y);

		Sleep(100);
	}
}
