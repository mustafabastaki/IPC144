/* Walkthrough
 */

#include <stdio.h>
#define ADULT_FARE 3.25

int main(void)
{
	int riders;
	double total;

	printf("Number of riders : ");
	scanf("%d", &riders);

	total = riders * ADULT_FARE;
	printf("Total fare is %.2lf\n\n", total);

	printf("riders' address %x\n", &riders);
	printf("total's address %x\n", &total);

	return 0;

}

