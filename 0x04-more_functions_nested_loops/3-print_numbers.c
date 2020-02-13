#include "holberton.h"
/**
 * print_numbers - check the code for Holberton School students.
 * @a: parameter to check
 * Return: Always 0
 */

void print_numbers(void)
{
	int a = 0;

	if (a < 9)
	{
		for (; a <= '9'; a++)
		{
			_putchar([a]);
		}
	}
	_putchar('\n');
}
