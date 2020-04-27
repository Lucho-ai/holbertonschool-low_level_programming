#include "holberton.h"

/**
 * is_prime_number - function to calculate if n is prime.
 * @n: Check if prime
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_find(n, 2));
}

/**
 * _find - function that help to find a prime number.
 * @j: number to be calculate
 * @find1: Help find if its prime
 * Return: 1 if prime; 0 if not prime.
 */

int _find(int j, int find1)
{
	if (find1 <= (j - 1))
	{
		if (j % find1 == 0)
		{
			return (0);
		}
		return (_find(j, find1 + 1));
	}
	return (1);
}
