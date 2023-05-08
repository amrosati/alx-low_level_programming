#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table to add/update the key/value to
 * @key: The key (can not be an empty string)
 * @value: The value associated with the key (must be duplicated)
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	unsigned long int index;

	if (!ht)
		return (0);
	if (key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		for (tmp = ht->array[index]; tmp; tmp = tmp->next)
			if (strcmp(key, tmp->key) == 0)
			{
				free(new_node);
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}

		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
