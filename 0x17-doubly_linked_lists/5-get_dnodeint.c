#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a list.
 * @head: Head of the list.
 * @index: Place of the list.
 * Return: Head or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;
	if (head != NULL)
	{
		while (counter < index && head != NULL)
		{
			head = head->next;
			counter++;
		}
		return (head);
	}
	return (NULL);
}
