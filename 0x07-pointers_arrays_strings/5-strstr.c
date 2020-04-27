#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring..
 * @haystack: String to be compared
 * @needle: Substring to be located
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (p = i, j = 0; needle[j] != '\0'; j++, p++)
		{
			if (haystack[p] != needle[j] || haystack[p] == '\0')
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
