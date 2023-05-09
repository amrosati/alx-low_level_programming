#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int coma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;

		for (tmp = ht->array[i]; tmp; tmp = tmp->next)
		{
			if (coma > 0)
				printf(", ");

			printf("\'%s\': \'%s\'", tmp->key, tmp->value);
			coma++;
		}
	}
	printf("}\n");
}
