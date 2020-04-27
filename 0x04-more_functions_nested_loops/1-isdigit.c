#include "holberton.h"
/**
 * _isdigit - returns 1 if C is a digit 0 otherwise
 * @c: takes in a digit
 * Return: 0 otherwise, 1 if is a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
