#include <stdio.h>

int main(void)
{
	float cash;

	printf("How much cash do you have in your pocket ? Please enter a number as I have not yet learned how to accpet a string or character from you :)   : ");

	scanf("%f", &cash);

	printf("The amount of cash you have in your pocket is $%.2f\n", cash);


	return 0;
}

