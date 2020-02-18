#include <stdio.h>
#include "holberton.h"
/**
 * reset_to_98 - funtion that takes a parameter and update.
 * @n: its the value of the pointer
 * Return: Always 0.
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
