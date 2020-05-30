#include "hash_tables.h"

/**
 * shash_table_create - Sorted hash table
 * @size: size of the sorted hash table
 * Return: pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht = NULL;
	shash_node_t **array = NULL;

	if (!size)
		return (NULL);
	sht = calloc(1, sizeof(shash_table_t));
	if (!sht)
		return (NULL);
	array = calloc(size, sizeof(shash_node_t *));
	if (!array)
	{
		free(sht);
		return (NULL);
	}
	sht->size = size;
	sht->array = array;
	sht->shead = NULL;
	sht->stail = NULL;
	return (sht);
}

/**
 * shash_table_set - Adds an element to a sorted hash table
 * @ht: the sorted hash table
 * @key: the key value
 * @value: value paired with the key
 * Return: 1 if success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	shash_node_t *newnode = NULL, *ptr = NULL;

	if (!ht || !ht->array || !key || !*key || !value)
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
	newnode = malloc(sizeof(shash_node_t));
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
	newnode->sprev = NULL;
	newnode->snext = NULL;
	ht->array[idx] = newnode;
	insert_sorted_shnode(ht, newnode);
	return (1);
}

/**
 * insert_sorted_shnode - Inserts node into a sorted array
 * @sht: pointer to the shash table
 * @node: pointer to the node to be inserted into sorted list
 * Return: nothing
 */
void insert_sorted_shnode(shash_table_t *sht, shash_node_t *node)
{
	shash_node_t *prev = NULL;

	node->sprev = NULL;
	node->snext = sht->shead;
	if (!sht->shead || strcmp(node->key, sht->shead->key) <= 0)
	{
		sht->shead = node;
		if (!sht->stail)
			sht->stail = node;
		if (node->snext)
			node->snext->sprev = node;
		return;
	}
	while (node->snext && strcmp(node->key, node->snext->key) > 0)
	{
		prev = node->snext;
		node->snext = prev->snext;
		node->sprev = prev;
	}
	if (prev)
		prev->snext = node;
	if (node->snext)
		node->snext->sprev = node;
	else
		sht->stail = node;
}

/**
 * shash_table_get - Gets a value using a key
 * @ht: pointer to the sorted hash table
 * @key: the key
 * Return: the string value paired with the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *ptr = NULL;

	if (!ht || !ht->array || !key)
		return (NULL);
	ptr = ht->array[key_index((unsigned char *)key, ht->size)];
	if (!ptr)
		return (NULL);
	for (; ptr; ptr = ptr->next)
		if (!strcmp(ptr->key, key))
			return (ptr->value);
	return (NULL);
}

/**
 * shash_table_print - Function that prints all the key value pairs
 * @ht: pointer to the sorted hash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr = NULL;

	if (!ht || !ht->array || !ht->shead)
		return;
	ptr = ht->shead;
	printf("{'%s': '%s'", ptr->key, ptr->value);
	ptr = ptr->snext;
	for (; ptr; ptr = ptr->snext)
		printf(", '%s': '%s'", ptr->key, ptr->value);
	printf("}\n");
}

/**
 * shash_table_print_rev - Function that prints all the key value pairs in reverse
 * @ht: pointer to the sorted hash table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr = NULL;

	if (!ht || !ht->array || !ht->stail)
		return;
	ptr = ht->stail;
	printf("{'%s': '%s'", ptr->key, ptr->value);
	ptr = ptr->sprev;
	for (; ptr; ptr = ptr->sprev)
		printf(", '%s': '%s'", ptr->key, ptr->value);
	printf("}\n");
}

/**
 * shash_table_delete - Function that deletes the sorted hash table
 * @ht: pointer to the sorted hash table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *walk = NULL, *ptr = NULL;

	if (ht)
	{
		walk = ptr = ht->shead;
		while (walk)
		{
			ptr = walk;
			walk = walk->snext;
			free(ptr->key);
			ptr->key = NULL;
			free(ptr->value);
			ptr->value = NULL;
			ptr->snext = NULL;
			ptr->sprev = NULL;
			free(ptr);
			ptr = NULL;
		}
		free(ht->array);
		ht->array = NULL;
		ht->shead = NULL;
		ht->stail = NULL;
		free(ht);
		ht = NULL;
	}
}
