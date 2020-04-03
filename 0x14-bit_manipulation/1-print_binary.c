#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * print_binary - Prints the binary representation.
 * @n: Binary numbers.
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int j = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	j = j << 63;
	for (; !(n & j); )
	{
		j = j >> 1;
	}

	for (; j; )
	{
		if ((n & j) != 0)
		{
			_putchar('1');
			j = j >> 1;
		}
		else
		{
			_putchar('0');
			j = j >> 1;
		}
	}
}
