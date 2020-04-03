#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t.
 * @head: Pointer to head.
 * @str: Pointer to str.
 * Return: The elements it prints.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int j = 0;
	list_t *a, *b;

	a = malloc(sizeof(list_t));
	if (a == NULL)
	{
		return (NULL);
	}
	while (*(str + j) != '\0')
		j++;
	a->str = strdup(str);
	a->len = j;
	a->next = NULL;

	if (*head != NULL)
	{
		b = *head;
		while (b->next != NULL)
			b = b->next;
		b->next = a;
	}
	else
	{
		*head = a;
	}
	return (a);
}
