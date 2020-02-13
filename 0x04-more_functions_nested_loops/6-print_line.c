#include "holberton.h"
/**
* print_line - check the code fot holberton school studets
*/

void print_line(int n)
{
	int l;

	for (l = n; l > 0; l--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
