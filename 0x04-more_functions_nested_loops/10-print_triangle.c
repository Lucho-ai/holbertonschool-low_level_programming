#include "holberton.h"

/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size)
{
	int altura;
	int ancho;
	int numeral;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (altura = 1; altura <= size; altura++)
	{
		for (ancho = 1; ancho <= (size - altura); ancho++)
		{
			_putchar(' ');
		}
		for (numeral = 1; numeral <= altura; numeral++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
