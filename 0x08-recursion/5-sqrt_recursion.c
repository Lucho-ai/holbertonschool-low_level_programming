#include "holberton.h"
/**
 * _sqrt_recursion - Function returns the natural square root of a number.
 * @n: Integer.
 * Return: Result of the square.
 */
int _sqrt_recursion(int n)
{
	int result = 0;

	result = _find (n, 0);
	return (result);
}

/**
 * _find - Find the square.
 * @n: integer
 * @xD:integer
 * Return: result of the sqare root of n
 */
int _find(int j, int i)
{
	int result = 0;

	if (i * i > j)
		return (-1);
	if (i * i == j)
		return (i);
	result = _find(j, i + 1);
	return (result);
}
