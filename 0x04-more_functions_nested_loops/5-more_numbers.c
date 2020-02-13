#include "holberton.h"
/**
* more_numbers - check the code fot holberton school studets
*/

void more_numbers(void)
{
	int num, linea;

	for (linea = 0; linea < 10; linea++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
