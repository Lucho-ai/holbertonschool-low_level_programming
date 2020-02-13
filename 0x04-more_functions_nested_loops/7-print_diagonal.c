#include "holberton.h"
/**
* print_diagonal - check the code fot holberton school studets
* @n: num 1
*/
void print_diagonal(int n)
{
	int s;
	int espacio;

	if (n > 0)
	{
		for (s = 1; s <= n; s++)
		{
			for (espacio = 1; espacio < s; espacio++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
