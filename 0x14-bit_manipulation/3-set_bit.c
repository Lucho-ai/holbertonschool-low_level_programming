#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * set_bit - Sets value of a bit to 1 a given index.
 * @n: N.
 * @index: Index.
 * Return: 1 or -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	if (!(*n & (1 << index)))
	{
		*n += 1 << index;
	}
	return (1);
}
