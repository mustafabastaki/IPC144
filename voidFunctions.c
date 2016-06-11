/* Void functions
 */

#include<stdio.h>

void countDown(int n)
{
	while( n > 0) {
		printf("%d\n", n);
		n--;
	};
	return;
}

void alphabet(void)
{
	char c = 'A';
	do {
		printf("%c\n", c);
		c++;
	}	while (c != 'Z');
	return;
}

int main(void)
{
	countDown(5);
	alphabet();

	return 0;
}

