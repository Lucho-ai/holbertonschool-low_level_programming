#include "holberton.h"
/**
* print_square - check the code fot holberton school studets
* @size: size digit
*/
void print_square(int size)
{
	int square;
	int espacio;

	if (size > 0)
	{
		for (square = 1; square <= size; square++)
		{
			for (espacio = 1; espacio < size; espacio++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}

	else
		_putchar('\n');
}
