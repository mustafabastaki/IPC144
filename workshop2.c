#include <stdio.h>


int main(void)
{
	printf("+--------------+\n");
	printf("|              |\n");
	printf("|  CODE QUEST  |\n");
	printf("|              |\n");
	printf("+--------------+\n");

	int _Pstrength, _Pspeed, _Pdefense, _Pintelligence, _Psum;
	int _Estrength, _Espeed, _Edefense, _Eintelligence, _Esum;
	int _PstrengthRatio, _PspeedRatio, _PdefenseRatio, _PintelligenceRatio, _Pluck;
	int _Php = 10;
	int _Ehp = 10;
	int _O;
	float  _pAttackpower, _eAttackpower, _pMagicpower;
	_pAttackpower = (float)_Pstrength / _Edefense * 5;
	_eAttackpower = (float)_Estrength / _Pdefense * 5;
	_pMagicpower = (float)_Pintelligence / _Eintelligence * 5;


	printf("Character Creation\nPlease enter your desired stats for your character\n\n");

	printf("Enter strength: ");
	scanf("%d", &_Pstrength);
	printf("Enter speed: ");
	scanf("%d", &_Pspeed);
	printf("Enter defense: ");
	scanf("%d", &_Pdefense);
	printf("Enter intelligence: ");
	scanf("%d", &_Pintelligence);

	_Psum = (_Pstrength + _Pspeed + _Pdefense + _Pintelligence);
	_PstrengthRatio = (float)_Pstrength / _Psum * 100;
	_PspeedRatio = (float)_Pspeed / _Psum * 100;
	_PdefenseRatio = (float)_Pdefense / _Psum * 100;
	_PintelligenceRatio = (float)_Pintelligence / _Psum * 100;
	_Pluck = _Psum % 30;

	printf("Your player's final states are:\n\nStrength: %d\nSpeed: %d\nDefense: %d\nIntelligence: %d\nLuck: %d\n", _PstrengthRatio, _PspeedRatio, _PdefenseRatio, _PintelligenceRatio, _Pluck);

	do {
		printf("\nBattle Start!\nYour HP:%d Enemy HP:%d\nSelect your move : ", _Php, _Ehp);
		scanf("%d", &_O);

		if (_O == 1)
		{
			printf("You attacked the enemy!\n");
			printf("The enemy attacked you!\n");
			_Ehp = (int)_Ehp - _pAttackpower;
			_Php = (int)_Php - _eAttackpower;
			if (_Php <= 0)
			{
				printf("You died\n");
				return 0;
			}
		}
		else
		{
			printf("You shocked the enemy!\nThe enemy attacked you!\n");
			_Ehp = (int)_Ehp - _pMagicpower;
			_Php = (int)_Php - _eAttackpower;
			if (_Ehp <= 0)
			{
				printf("You won!\n");
				return 0;
			}
		}
	} while (_Php >= 0 || _Ehp >= 0);

		return 0;
}

