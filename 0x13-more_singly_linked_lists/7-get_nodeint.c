#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t.
 * @head: Head.
 * @index: Indexs.
 * Return: address of nodes.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	listint_t *a;

	if (!head)
	{
		return (NULL);
	}

	j = head;

	for (j = 0; a; j++)
	{
		if (j == index)
			return (a);
		a = a->next;
	}

	return (NULL);
}
