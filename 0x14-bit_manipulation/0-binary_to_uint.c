#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * binary_to_uint - Converrts binary to decimal..
 * @b: Binary numbers.
 * Return: Decimal numbers.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			j = (j * 2) + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (j);
}
