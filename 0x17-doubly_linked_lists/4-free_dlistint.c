#include "lists.h"
/**
 *free_dlistint - Frees a list.
 * @head: Head of the list.
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
