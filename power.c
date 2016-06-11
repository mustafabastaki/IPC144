/* Raise an integer to an integer
 */

#include<stdio.h>

#include "power.h"


int main(void)
{
	int base, exp, answer;

	printf("Enter base : ");
	scanf("%d", &base);
	printf("Enter exponent : ");
	exp = getNonNegInt();
	answer = power(base, exp);
	printf("%d^%d = %d\n", base, exp, answer);
	
	return 0;
}
// power returns the value of the base raised to
// the power of the exponent (base^exponent)
//
// power assumes that base and exponent are
// integer values and exponent is non-negative
//
int power(int base, int exponent)
{
	int i, result;

	result = 1;
	for (i = 0; i < exponent; i++)
		result = result * base;

	return result;
}
int getNonNegInt(void)
{
	int value;

	do {
		printf(" Non-negative : ");
		scanf("%d", &value);
		if(value < 0)
			printf(" * Negative! *\n");
	} while(value <= 0);

	return value;
}


