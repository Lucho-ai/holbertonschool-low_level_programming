#include "hash_tables.h"

/**
 * hash_table_create - That creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t **array = NULL;

	ht = calloc(1, sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	array = calloc(size, sizeof(hash_node_t *));
	if (!array)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	ht->array = array;
	return (ht);
}
