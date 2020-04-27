#include "holberton.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory area.
 * @dest: array of type character.
 * @src:  array of type character.
 * @n: unsigned integer.
 * Return: the value of dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

		for (b = 0; b < n; b++)
		{
			dest[b] = src[b];
		}
	return (dest);
}
