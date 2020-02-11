#include "holberton.h"
/**
 * print_sign - returns 1 if >0, returns 0 if 0=0, returns -1 if <0
 * @c: takes in a character
 * prints + if n>0, - if n<0, 0 if 0=0
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
