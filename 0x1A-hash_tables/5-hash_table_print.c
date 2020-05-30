#include "hash_tables.h"

/**
 * hash_table_print - Prints all the key value pairs
 * @ht: pointer to the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ptr = NULL;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size && !ht->array[i])
		i++;
	if (i == ht->size)
	{
		printf("}\n");
		return;
	}
	ptr = ht->array[i];
	printf("'%s': '%s'", ptr->key, ptr->value);
	ptr = ptr->next;
	do {
		for (; ptr; ptr = ptr->next)
			printf(", '%s': '%s'", ptr->key, ptr->value);
		i++;
		if (i < ht->size)
			ptr = ht->array[i];
		else
			break;
	} while (1);
	printf("}\n");
}
