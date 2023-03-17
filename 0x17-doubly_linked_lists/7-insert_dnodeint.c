#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head of list
 * @idx: index
 * @n: data for new node
 *
 * Return: address of new node (on success)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cursor, *node;

	if (h == NULL)
		return (NULL);

	for (cursor = *h; cursor->next && idx >= 0; idx--)
		cursor = cursor->next;

	if (cursor->next == NULL && idx != 0)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = cursor;
	node->next = cursor->next;
	cursor->next = node;

	return (node);
}
