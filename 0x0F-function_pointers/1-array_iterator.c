#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - executes a function given as a parameter.
 *@j: Variable.
 *@K: Size of variable.
 *Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int j;
	int k = size;


	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}

	for (j = 0; j < k; j++)
	{
		action(array[j]);
	}
}
