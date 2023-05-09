#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
			free_list(ht->array[i]);

	free(ht->array);
	free(ht);
}

/**
 * free_list - frees a linked list
 * @list: list
 *
 * Return: nothing
 */
void free_list(hash_node_t *list)
{
	if (!list)
		return;

	free_list(list->next);
	free(list->key);
	free(list->value);
	free(list);
}
