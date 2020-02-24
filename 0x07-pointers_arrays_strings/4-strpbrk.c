#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - function that copies memory area.
 * @s: pointer.
 * @accept: varaible desing.
 * Return: 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (s + i);
}
