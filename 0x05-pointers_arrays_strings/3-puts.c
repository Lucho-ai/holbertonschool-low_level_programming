#include <stdio.h>
#include "holberton.h"
/**
 * _puts - funtion that prints a string.
 * @str: its the string
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
