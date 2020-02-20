#include <stdio.h>
#include "holberton.h"
/**
 * _strcat - funtion that print a string overwriting a string
 * @src: its the value for string
 * @dest: its the value of the array
 * Return: Always dest.
 */
char *_strncat(char *dest, char *src, int n)
{

	int i, j, c;


	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0'; c++)
		;
	if (n > c)
	{
		n = c;
	}
	for (j = 0; j < n;)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
