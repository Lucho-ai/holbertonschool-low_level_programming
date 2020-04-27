#include <stdio.h>
#include "holberton.h"
/**
 * _strcat - funtion that print a string overwriting a string
 * @src: its the value for string
 * @dest: its the value of the array
 * Return: Always dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
