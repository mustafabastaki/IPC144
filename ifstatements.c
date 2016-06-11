// if and if else statements
//
int main(void)
{
	int age;

	printf("What is your age? ");
	scanf("%d", &age);

	if (age>12 && age<16)
	{
		printf("Student Fare-	NO ID required\n");
	}
	else if (age > 15 && age < 20)
	
		printf("Student Fare-	ID required\n");
	
	else if (age>= 2 && age < 13)
	
		printf("Child Fare\n");
	
	else if (age>=65)
	
		printf("Senoir Fare-	ID is required\n");
	
	else if (age<2)
	
		printf("Free Ride\n");
	
	else
		printf("Adult Fare\n");


	return 0;
}

