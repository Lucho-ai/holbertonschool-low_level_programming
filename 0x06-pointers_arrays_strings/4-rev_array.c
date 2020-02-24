#include <stdio.h>
#include "holberton.h"
/**
 * _strcat - funtion that print a string overwriting a string
 * @src: its the value for string
 * @dest: its the value of the array
 * Return: Always dest.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	for (i = 0, j = n - 1; i < n / 2; j--, i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
