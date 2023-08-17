#include "lists.h"

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
