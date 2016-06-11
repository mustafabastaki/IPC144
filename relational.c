// Relation Expressions
//
int main(void)
{
	int i, j, k;

	printf("Enter an integer : ");
	scanf("%d", &i);
	printf("Enter an integer : ");
	scanf("%d", &j);

	k = i == j;

	printf("%d == %d yields %d\n", i, j, k);

	return 0;
}


