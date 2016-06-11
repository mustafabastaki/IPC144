// Card Value
//
#include<stdio.h>

int main(void)
{
	char rank;
	int points;

	printf("Enter the card rank : ");
	scanf("%c", &rank);

	if ( rank == Jack || Queen || King)
	{
		points = 11;
	} 
	else if ( rank == Ace)
	{
		points = 1;
	}
	else
	{
		points = 10;
	}
	printf("Your card's point value is %d\,", points);

	return 0;

}


	 
