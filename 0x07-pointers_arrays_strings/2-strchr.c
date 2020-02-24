

#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - function that copies memory area.
 * @s: pointer.
 * @c: varaible desing.
 * Return: 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
