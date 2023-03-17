#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at the given index
 * @head: pointer to head of list
 * @index: index
 *
 * Return: address of the requested node (on success)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	return (get_dnodeint_at_index(head->next, index - 1));
}
