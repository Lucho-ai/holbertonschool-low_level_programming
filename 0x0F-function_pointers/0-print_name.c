#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name -Prints a name.
 *@f: Funtion.
 *@name: Name print.
 *Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}

	if (f == NULL)
	{
		return;
	}
		f(name);
}
