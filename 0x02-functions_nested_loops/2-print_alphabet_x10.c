#include "holberton.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * @void: no argument
 **/

void print_alphabet_x10(void)
{
        char a;
        int x;
        for(x = 0; x <= 10; x++)
        {
                for(a='a'; a <= 'z'; a++)
                        _putchar(a);
			_putchar('\n');
        }
}
