#include <stdio.h>
#include "holberton.h"
/**
 * _print_rev_recursion - prints a string.
 * @s: string.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
