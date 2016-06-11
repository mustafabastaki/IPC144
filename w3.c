/* Workshop 4
 */

#include<stdio.h>
#include"w4.h"

int main(void)
{
	int _O; 
	
	do { 
	clearScreen();
	printf("--Main Menu--\n1 -New Game\n2 - Load Game\n3 - Exit\n\nSelect: ");
	_O = validate(1,3);

	switch (_O){
	case 1: newGame();
		break;
	
	case 2: load()
		break;

	case 3: printf("Good Bye!\n");
		return 0;
		break;
	}
	} while ( _O != 3);

	return 0;
}


void clearScreen(void);
{
	int i = 0;

	for (i = 0; i < 40; i++)
	{
		printf("\n");
	}
	return;
}
int validate(int low, int high)
{
	int _I;
	do {
		printf("Please enter integer : ");
		scanf("%d", &_I);
		if(_I < low || _I > high)
			printf("* Invalid! *\n");
	} while (_I < low || _I > high);

	return _I;
}
void newGame(void)
{
	printf("Not Implemented!\n");
}
void load(void)
{
	pritnf("Not Implemented!\n");
}



