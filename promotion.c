// Promotion with Assignment Operators
//
int main(void)
{
	int loonies;
	double cash;

	printf("Loonies ? ");
	scanf("%d", &loonies);
	cash = loonies; // promotion
	printf("Cash is $%.2lf\n", cash);

	return 0;

	}

