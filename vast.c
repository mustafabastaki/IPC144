// From minutes to hours
//
int main(void)
{
	int minutes;
	float hours;

	printf("Minutes ? ");
	scanf("%d", &minutes);
	hours = (float)minutes / 60;
	printf("=%.2lf hours\n", hours);

	return 0;

}

