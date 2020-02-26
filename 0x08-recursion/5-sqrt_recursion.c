#include "holberton.h"
#include <stido.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: Int.
 * Return: Result of the square.
 */
int _sqrt_recursion(int n)
{
	int result = 0;

	result = square(n, 0);
	return (result);
}

/**
 * _square - Find the square.
 * @j: integer
 * @i:integer
 * Return: result of the sqare root of n
 */
int _square(int j, int i)
{
	int result = 0;

	if (i * i > j)
	{
		return (-1);
	}
	if (i * i == j)
	{
		return (i);
		result = _square(j, i + 1);
		return (result);
	}
}
