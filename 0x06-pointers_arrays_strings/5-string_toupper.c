#include <stdio.h>
#include "holberton.h"
/**
 * _strcat - funtion that print a string overwriting a string
 * @src: its the value for string
 * @dest: its the value of the array
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
