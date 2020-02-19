#include "holberton.h"
/**
 * *_strcpy - copies the string pointed to by src to the buffer pointed to dest
 * @dest: char dest
 * @src: char src
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int s;
	char a;

	for (s = 0; src[s] != '\0'; s++)
	{
		a = src[s];
		dest[s] = a;
	}
	dest[s] = '\0';
	return (dest);
}
