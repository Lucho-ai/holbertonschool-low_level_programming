#include "holberton.h"
/**
 * print_last_digit - function that prints the last digit
 * @n: takes in an integer
 * Return: returns output
 */

int print_last_digit(int n)
{

	int v = n % 10;

	if (n < 0)
		v = v * -1;
	_putchar(v + '0');
	return (v);
}
