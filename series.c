// Arithmetic Series
//
#include <stdio.h>

int main(void)
{
	int terminal;
	int sum = 0;

	do{	printf("Enter the terminal integer : ");
		scanf("%d", &terminal);
		sum += terminal;
	}while (terminal >= 1 && terminal <= 10);


	printf("The sum of the series is %d\n", sum);

	return 0;

}

