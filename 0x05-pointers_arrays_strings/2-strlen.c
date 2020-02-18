#include <stdio.h>
#include "holberton.h"
/**
 * strlen - funtion that takes a parameter and update.
 * @s: its the value of the pointer
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
