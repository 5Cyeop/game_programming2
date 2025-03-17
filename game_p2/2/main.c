#include <stdio.h>
#include "Input.h"
#include "inventory.h"

int main()
{
	int* inventoryP;

	//InputEx();

	/*int num = 1;
	int* nump = &num;

	int* num1 = NULL;
	num1 = malloc(sizeof(int));
	printf("%p\n", num1);

	

	*num1 = 10;
	printf("%d\n", *num1);

	free(num1);*/

	inventoryP = malloc(sizeof(int));
	*inventoryP = 10;

	ShowInventoryCount(inventoryP);

	free(inventoryP);
}