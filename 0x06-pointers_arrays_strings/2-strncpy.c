#include <stdio.h>
#include "holberton.h"
/**
 * _strncpy - funtion that copy a string
 * @src: its the value for string
 * @dest: its the value of the array
 * @n: n is the number of bytes
 * Return: Always dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
