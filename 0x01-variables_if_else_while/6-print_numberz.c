#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/

int main(void)
{
int c = 0;
while (c < 10)
{
	putchar(c % 10 + '0');
	c++;
}
putchar('\n');
return (0);
}
