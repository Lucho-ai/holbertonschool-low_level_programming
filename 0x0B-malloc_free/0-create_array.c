#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates array
 * @c: Array
 * @size: Size of array
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}
	b = malloc(sizeof(char) * size);
	if (b == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		*(b + a) = c;
	}
	return (b);
}
