// Neested Selections
//
//
#include<stdio.h>

int main(void)
{
	int grade =45;
	int sup = 1;

	if (grade < 50) 
	{
		if (sup == 1)
		{
			printf("Sup\n");
		}
		else
		{
			printf("Failed\n");
		}
	}
		else{
			printf("Pass\n");
		}
	return 0;
       

}


