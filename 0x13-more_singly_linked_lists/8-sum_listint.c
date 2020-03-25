#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Funcition that Sum of all data(n).
 * @head: Head.
 * Return: address of nodes.
 */
int sum_listint(listint_t *head)
{
	int a;
	a = 0;

	if (!head)
		return (a);

	if (head->next)
		a += sum_listint(head->next);

	a += head->n;
	return (a);
}
