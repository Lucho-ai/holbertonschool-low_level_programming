#include "hash_tables.h"

/**
 * hash_table_set - That adds an element to a hash table
 * @ht: the hash table
 * @key: the key value
 * @value: value paired with the key
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *newnode = NULL, *ptr = NULL;

	if (!ht || !key || !*key || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[idx];
	if (ptr)
		for (; ptr; ptr = ptr->next)
			if (!strcmp(ptr->key, (char *)key))
			{
				free(ptr->value);
				ptr->value = strdup(value);
				return (1);
			}
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);
	newnode->key = strdup(key);
	if (!newnode->key)
	{
		free(newnode);
		return (0);
	}
	newnode->value = strdup(value);
	if (!newnode->value)
	{
		free(newnode->key);
		free(newnode);
		return (0);
	}
	newnode->next = ht->array[idx];
	ht->array[idx] = newnode;
	return (1);
}
