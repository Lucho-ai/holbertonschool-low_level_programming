#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - Prints all type.
 * @format: Format to in.
 * @* : Pointer ,
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int s = 0, k = 1;
	char *x;

	while (format)
	{
		va_start(ap, format);
		while (*(format + s))
		{
			k = 1;
			switch (*(format + s))
			{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				x = va_arg(ap, char *);
				if (x == NULL)
					x = "(nil)";
				printf("%s", x);
				break;
			default:
				k = 0;
				break;
			}
			if (*(format + s + 1) && k)
				printf(", ");
			s++;
		}
		va_end(ap);
		break;
	}
	printf("\n");
}
