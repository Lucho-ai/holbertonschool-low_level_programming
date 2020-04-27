#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - Prints numbers followed by new line.
 * @n: Numbers.
 * @separator : ,
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ai;

	unsigned int i;

	va_start(ai, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ai, int));

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ai);
}
