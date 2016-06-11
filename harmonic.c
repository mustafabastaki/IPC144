/* Harmonic
 */

#include<stdio.h>

int main(void)
{
	int _T;
	double i = 0;
	double _H = 0;
	double _V;
	

	printf("Please enter number of terms : ");
	scanf("%d", &_T);

	for(i=1; i < _T; i++)
	{ 
		_V = 1 / i;
		_H += _V;
	}
	printf("Harmonic value is %.6lf\n", _H);

	return 0;

}


