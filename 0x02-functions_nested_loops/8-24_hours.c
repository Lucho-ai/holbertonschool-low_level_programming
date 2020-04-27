#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day 00:00 to 23:59
 * @void - no argument
 */

void jack_bauer(void)
{
	int hor, min;

	for (hor = 0; hor < 24; hor++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hor / 10 + '0');
			_putchar(hor % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
