// do while statements


#include <stdio.h>

int main(void)
{
	int slices = 12;

	do {
		slices--;
		printf("Gulp! Slices left %d\n", slices);
	} while (slices < 5);

	return 0;

}



