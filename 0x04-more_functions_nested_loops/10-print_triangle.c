#include "holberton.h"

/**
 * print_triangle - print traingle # with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size)
{
	int alto;
	int ancho;
	int numeral;

	if (size <= 0)
	{
		for (alto = 1; alto <= size; alto++)
		{
			for (ancho = 1; ancho <= (size - alto); ancho++)
			{
				_putchar(' ');
			}
			for (numeral = 1; numeral <= alto; numeral++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
