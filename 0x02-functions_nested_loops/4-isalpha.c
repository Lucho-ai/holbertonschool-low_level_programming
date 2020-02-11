#include "holberton.h"
/**
 * _isalpha - returns 1 if c is a letter, returns 0 otherwise
 * @c: takes in a character
 * Return: 0 for uppercase, 1 for lowercase
 */

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
