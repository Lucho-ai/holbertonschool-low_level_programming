#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	int o;

	for (o = 0; o < 100; o++)
	{
		putchar(o / 10 % 10 + '0');
		putchar(o % 10 + '0');
		if (o < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
