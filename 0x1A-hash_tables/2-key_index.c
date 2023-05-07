#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to be indexed
 * @size: size of the array (aka max index)
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key);

	return (idx % size);
}
