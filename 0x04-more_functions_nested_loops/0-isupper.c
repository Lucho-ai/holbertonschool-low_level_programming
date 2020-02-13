#include "holberton.h"

/**
 * _isupper - returns 1 if uppercase alphabet and 0 otherwise
 * @c: takes in a character
 * Return: 1 for uppercase, 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

	{
		return (1);
	}
	else
	{
		return (0);
	}
}
