#include <stdio.h>
#include "holberton.h"
/**
 * factorial- Return a factorial of a given number .
 * @n: string.
 * Return: factorial number
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
