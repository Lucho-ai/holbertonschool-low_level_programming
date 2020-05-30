#include "hash_tables.h"

/**
 * hash_table_get - That gets a value using a key
 * @ht: pointer to the hash table
 * @key: the key
 * Return: the string value paired with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr = NULL;

	if (!ht || !key)
		return (NULL);
	ptr = ht->array[key_index((unsigned char *)key, ht->size)];
	if (!ptr)
		return (NULL);
	for (; ptr; ptr = ptr->next)
		if (!strcmp(ptr->key, key))
			return (ptr->value);
	return (NULL);
}
