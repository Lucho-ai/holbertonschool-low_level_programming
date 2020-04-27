#include "holberton.h"
#include <stdio.h>
/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: char str
 */
void puts_half(char *str)
{
	int half;

	half = 0;
	for (; str[half] != '\0';)
	{
		half++;
	}
	if (half % 2 == 0)
	{
		half = (half - 1) / 2;
	}
	else
	{
		half = half / 2;
	}
	for (half = half + 1; str[half] != '\0';)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
