#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index to insert the node
 * @n: Integer of the new node
 *
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *cursor;
	unsigned int size;

	if (!h)
		return (NULL);

	size = (unsigned int) dlistint_len(*h);

	if (!idx)
	{
		node = add_dnodeint(h, n);
		if (!node)
			return (NULL);
		return (node);
	}
	else if (idx == size)
	{
		node = add_dnodeint_end(h, n);
		if (!node)
			return (NULL);
		return (node);
	}
	else if (idx > size)
		return (NULL);

	for (cursor = *h; cursor->next && idx > 1; idx--)
		cursor = cursor->next;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = cursor->next;
	cursor->next->prev = node;
	node->prev = cursor;
	cursor->next = node;

	return (node);
}

/**
 * dlistint_len - Counts the number of elements in a doubly linked list
 * @h: Head of the list
 *
 * Return: Length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (!h)
		return (0);

	return (1 + dlistint_len(h->next));
}
