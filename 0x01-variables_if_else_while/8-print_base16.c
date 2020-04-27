#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int u;
char c;

for (u = 0; u < 10; u++)
putchar(u % 10 + '0');
for (c = 'a'; c < 'g'; c++)
putchar(c);
putchar('\n');
return (0);
}
