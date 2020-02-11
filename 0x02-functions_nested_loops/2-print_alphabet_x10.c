#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 * @void: no argument
**/

void print_alphabet_x10(void)
{
	char a;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
			_putchar('\n');
	}
}
