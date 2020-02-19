#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers.
* @a: pointer
* @n: elements
*/
void print_array(int *a, int n)
{
	int array = 0;

	for (; array < n; array++)
	{
		if (array == n - 1)
		{
			printf("%d", a[array]);
		}
		else
		{
			printf("%d, ", a[array]);
		}
	}
printf("\n");
}
