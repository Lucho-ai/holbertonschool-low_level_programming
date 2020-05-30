#include "hash_tables.h"

/**
 * key_index - That gives the index of a key
 * @key: the key
 * @size: size of the array
 * Return: turns the index value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
