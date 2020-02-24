
#include "holberton.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory area.
 * @dest: array of type character.
 * @src:  array of type character.
 * @n: unsigned integer.
 * Return: the value of dest.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
			break;
		}
	}
	return (0);
}
