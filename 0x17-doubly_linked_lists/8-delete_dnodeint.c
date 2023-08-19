#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of dlistint_t list
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor;

	if (!head)
		return (-1);

	cursor = *head;

	if (!(*head))
		return (-1);
	if (!index)
		*head = (*head)->next;

	for (; cursor && index; index--)
		cursor = cursor->next;

	if (!cursor && index)
		return (-1);

	if (cursor->next)
		cursor->next->prev = cursor->prev;
	if (cursor->prev)
		cursor->prev->next = cursor->next;

	free(cursor);
	cursor = NULL;

	return (1);
}
