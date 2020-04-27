#include <stdio.h>
#include "holberton.h"
/**
 * _strcmp - funtion that compares two strings
 * @s1: its the string 1
 * @s2: itt the string 2
 * Return: Always dest.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	for (; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
	{

	}
	if (s1[i] != s2[i])
	j = s1[i] - s2[i];
	return (j);
}
