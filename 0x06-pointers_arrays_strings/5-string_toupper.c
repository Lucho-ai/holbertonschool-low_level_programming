#include <stdio.h>
#include "holberton.h"
/**
 * string_toupper - funtion that change uppercase
 * @s: is a string
 * Return: Always dest.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
