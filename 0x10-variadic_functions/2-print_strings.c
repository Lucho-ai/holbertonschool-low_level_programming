#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line..
 * @n: String to print
 * @separator: separate.
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list af;
	unsigned int i;
	char *text;

	va_start(af, n);

	for (i = 0; i < n; i++)
	{
		text = va_arg(af, char*);

		if (text == NULL)
			printf("(nil)");

		else if (i < n - 1 && separator != NULL)
			printf("%s%s", text, separator);

		else
			printf("%s", text);
	}
	printf("\n");
	va_end(af);
}
