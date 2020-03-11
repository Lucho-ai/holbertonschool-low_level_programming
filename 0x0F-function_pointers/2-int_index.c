#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - Given as parameter of each element in array.
 *@array: Array.
 *@size: Name to be print.
 *@cmp: Funtion.
 *Return: If size > -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;
	int k = size;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		for (j = 0; j < k; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}
	return (-1);
}
