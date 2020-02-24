#include <stdio.h>
#include "holberton.h"
/**
 * _memset() - check the code for Holberton School students.
 * @n parameter give us
 * @s puntero give us
 * @b is array give us
 * Return: A pointer to the memory a..
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
return (s);
}
