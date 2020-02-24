#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - function.
 * @accept: pointer.
 * @s: pointer.
 * Return: 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, longg;

	for (i = 0; s[i] != '\0'; i++)
	{
		longg = 2;

		for (j = 0; accept[j] != '\0'; j++)
		{

			if (s[i] == accept[j])
			{
				longg = 4;
				break;
			}
		}

		if (longg == 2)
		{
			break;
		}
	}
	return (j);
}
