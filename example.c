#include <stdio.h>

int main(void)
{
	const float pi = 3.1415927;   // pi is a constant float
		float radius;         // radius is a float
                float area;          // area is a float


		printf("Enter radius : ");   // promt user for radius input
		scanf("%f", &radius);        // accept radius value from user

		area = pi * radius * radius; // calculate area from radius

		printf("Area = %f\n", area); // copy are to std out

		return 0;
}

