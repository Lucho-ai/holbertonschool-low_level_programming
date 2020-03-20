#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - Adds nodes at the beginning of list_t list
 * @head: Pointer to head.
 * @str: Pointer to str.
 * Return: The elements it prints.
 */
list_t *add_node(list_t **head, const char *str)
{
	int j;
	list_t *a = malloc(sizeof(list_t));

	if (a == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (; str[j] != '\0')
	{
		j++;
	}
	a->str = strdup(str);
	a->len = j;
	a->next = *head;
	*head = a;
	return (a);
}
