#include "lists.h"

/**
 * add_dnodeint_end - Inserts a node at the end of doubly linked list
 * @head: Pointer to a pointer to the head of the list
 * @n: Integer to insert
 *
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *cursor;

	if (!head)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	cursor = *head;
	node->n = n;
	node->next = NULL;

	if (!cursor)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		while (cursor && cursor->next)
			cursor = cursor->next;
		node->prev = cursor;
		node->prev->next = node;
	}

	return (node);
}
