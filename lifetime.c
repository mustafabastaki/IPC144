/* Avoid Variable of the Same Name
 */

#include<stdio.h>

void foo(int x)
{
	int i = 4;
	do {
		int x = i;
		printf("%d ", x);
		i--;
	} while (i > 0);
	printf("%d\n ", x);
}

int main(void) {
	foo(6);
	printf("\n");
	return 0;
}

