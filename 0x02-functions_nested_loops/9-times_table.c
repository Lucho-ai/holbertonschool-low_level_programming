#include "holberton.h"
/**
 * times_table - entry point
 * Description: Function that  prints
 * Return: a void
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a * b) / 10 != 0)
				_putchar(((a * b) / 10) + '0');
			else if ((a * b) %10 != 0)
				_putchar(' ');
			else if (a == 0 && b > 0)
				_putchar(' ');
			_putchar(((a *b) % 10) + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		b = 0;
	}
}
