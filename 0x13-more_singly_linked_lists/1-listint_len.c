#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Return the number of elements on listint_t.
 * @h: Head.
 * Return: N of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
