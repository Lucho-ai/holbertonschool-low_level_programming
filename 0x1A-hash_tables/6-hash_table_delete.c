#include "hash_tables.h"

/**
 * hash_table_delete - Functio that Deletes the hash table
 * @ht: pointer to the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr = NULL, *prv = NULL;
	unsigned long int i = 0;

	for (; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			prv = ptr;
			ptr = ptr->next;
			free(prv->key);
			free(prv->value);
			free(prv);
		}
	}
	free(ht->array);
	free(ht);
}
