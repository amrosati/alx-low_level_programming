#include "lists.h"

/**
 * get_dnodeint_at_index - Finds the nth node of dlistint_t linked list
 * @head: Pointer to head of the list
 * @index: Index of the desired node
 *
 * Return: Address of the node, NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cursor = head;

	if (!cursor)
		return (NULL);

	for (; cursor && index; index--, cursor = cursor->next)
		;

	if (cursor && !index)
		return (cursor);
	else
		return (NULL);
}
