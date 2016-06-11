#include <stdio.h>

int main(void)
{
	float height;
	float base;
        float area;

	printf("Please enter height of triangle : ");
	scanf("%f", &height);
	printf("Please enter base of triangle   : ");
	scanf("%f", &base);

   	area = (height * base ) * 0.5;
	printf("Area of triangle is %.2f\n", area);

	return 0;

}


