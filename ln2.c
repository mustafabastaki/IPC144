/* Ln 2 values
 */

#include<stdio.h>

int main(void)
{
	int _T, _Check;
	double i = 0;
	double _Ln = 0;
	double _V = 0;

	printf("Please enter number of terms : ");
	scanf("%d", &_T);
	_Check = _T%2;

	for(i=1; i < _T; i++)
	{
		_V = 1 / i;
		if ( _Check == 1)
		{
			_Ln += _V;
		}
		else 
		{
			_V = -_V;
			_Ln += _V;
		}

		
	}
	_Ln = +_Ln;

	printf("Ln 2 value is %.6lf\n", _Ln);

	return 0;

}

