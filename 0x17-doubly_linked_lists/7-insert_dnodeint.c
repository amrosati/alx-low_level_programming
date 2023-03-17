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
	dlistint_t *cursor = *h, *node = NULL;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; cursor && idx > 1; idx--)
	{
		cursor = cursor->next;
		if (cursor == NULL)
			return (NULL);
	}

	if (cursor->next == NULL)
		return (add_dnodeint_end(h, n));

	node = add_dnodeint(&node, n);
	node->prev = cursor;
	node->next = cursor->next;
	cursor->next->prev = node;
	cursor->next = node;

	return (node);
}
