#include "lists.h"

/**
 * list_len - Length of a linked list
 * @h: Pointer of the linked list
 * Return: Amount of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	int a;

	if (h == NULL)
	{
    return (0);
  }
	for (a = 1; h->next != NULL; a++)
  {
    h = h->next;
  }
	return (a);
}
