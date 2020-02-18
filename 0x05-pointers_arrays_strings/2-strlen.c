#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - print the long of a string.
 * @s: its the string to out
 * Return: The counter
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
