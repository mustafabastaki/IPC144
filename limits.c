// Limits on Arithmetic Expressions
// limits.c

int main(void) {
	int i, j, ij;
	double x, y, xy;

	printf("Enter an integer ; ");
	scanf("%d", &i);
	printf("Enter an integer ; ");
	scanf("%d", &j);
	printf("Enter a floating-point number : ");
	scanf("%lf", &x);
	printf("Enter a floating-point number : ");
	scanf("%lf", &y);

	ij = i * j;
	xy = x * y;

	printf("%d * %d = %d\n", i, j , ij);
	printf("%lf * %lf = %lf\n", x, y, xy);

	return 0;
}
