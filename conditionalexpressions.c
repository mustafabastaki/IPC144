#include <stdio.h>

int main(void)
{
	int minutes;
	char s;

	printf("How many minutes left ? ");
	scanf("%d", &minutes);
	s = minutes > 1 ? 's' : ' ';
	printf("%d minute%c left\n", minutes, s);

	return 0;

}

