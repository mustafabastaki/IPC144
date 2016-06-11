/* Avoid Variable of the Same Name
 */

#include<stdio.h>

void foo(int x)
{
	int i = 4;
	do {
		int x = 1;
		printf("%d ", x);
		i--;
	} while (i > 0);
	printf("%d ", x);
}

int main(void) {
	foo(6);
	return 0;
}

