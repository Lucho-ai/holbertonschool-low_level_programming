#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - show the sum of the 2 diagonals of a square matrix of ints
 * @size: intttt
 * @a: aaaa
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, j, num, numm;

	num = 0;
	numm = 0;
	for (i = 0; i < (size * size); i += size + 1)
	{
		num += a[i];
	}
	for (j = size - 1; j < (size * size) - 1; j += size - 1)
	{
		numm += a[j];
	}
	printf("%d, %d\n", num, numm);
}
