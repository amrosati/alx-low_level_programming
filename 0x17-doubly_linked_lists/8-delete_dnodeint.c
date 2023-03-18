#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the given index
 * @head: head of list
 * @index: index of node to delete
 *
 * Return: 1 (on success), -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = NULL, *next = NULL, *node = *head;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	if (index == 0)
		*head = node->next;
	else
	{
		for (; node && index > 0; index--)
		{
			node = node->next;
			if (!node)
				return (-1);
		}

		prev = node->prev;
		next = node->next;
		prev->next = next;
		if (next)
			next->prev = prev;
	}

	free(node);
	node = NULL;
	return (1);
}
