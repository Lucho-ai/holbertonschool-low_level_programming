#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - function that copies memory area.
 * @s: pointer.
 * @accept: varaible desing.
 * Return: 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (p = i, j = 0; haystack[j] != '\0'; j++, p++)
		{
			if (haystack[p] == needle[j] || haystack[p] == '\0')
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
