#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a node on the end of listint_t.
 * @head: Head.
 * @n: Numbers.
 * Return: address of nodes.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i, *j;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);


	i->n = n;
	i->next = NULL;

	if (*head == NULL)
		*head = i;
	else
	{
		j = *head;
		while (j->next != NULL)
		{
			j = j->next;
		}
		j->next = i;
	}
	return (*head);
}
