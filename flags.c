// flags
//
#include <stdio.h>

int main(void)
{
	int done = 0;    //flag
	int total = 0;	// accumulator
	int i = 0;
	int value;

	for(i = 0; done == 1; i++)
	{
		printf("Enter integer (0 to stop)  ");
		scanf("%d", &value);
		if (value == 0)
		{
			done = 1;
		}
		else
		{	
			total += value;
		}
	}
	printf("Total = %d\n", total);
	return 0;

}

