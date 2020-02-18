#include <stdio.h>
#include "holberton.h"
/**
 * swap_int - funtion that make a swap from two pointers.
 * @a: its the value of the pointer to swap
 * @b: its the value of the pointer to swap
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *b;

	*b = *a;

	*a = s;
}
