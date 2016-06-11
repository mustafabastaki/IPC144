// From minutes to hours
//
int main(void)
{
	float minutes;
	float hours;

	printf("Minutes ? ");
	scanf("%f", &minutes);
	hours = minutes / 60;
	printf("=%.2lf hours\n", hours);

	return 0;

}

