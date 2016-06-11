/* Void functions
 */

#include<stdio.h>

void countDown(int n)
{
	while( n > 0) {
		printf("%d", n);
		n--;
	}
	return;
}

void alphabet(void)
{
	char c = 'A';
	do {
		printf("%d ", c);
		c++;
	}
	while (c != 'Z')
	return;
}

int main(void)
{
	countdown(5);
	alphabet();

	return 0;
}

