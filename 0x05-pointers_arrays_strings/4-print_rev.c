#include <stdio.h>
#include "holberton.h"
/**
 * print_rev - text to be print in reverse.
 * @s: s have the string to print.
 * void: void
 */
void print_rev(char *s)
{
	int b;
	int e;

	while (s[b] != '\0')
	{
		b++;
	}

	for (e = b; e >= 0; e--)
	{
		_putchar(s[e]);
	}
	_putchar('\n');
}
