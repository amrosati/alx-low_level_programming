#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head of list
 * @n: data of new node
 *
 * Return: address of new node (on success)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *cursor;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = *head;
		*head = node;
	}
	else
	{
		cursor = *head;
		while (cursor->next)
			cursor = cursor->next;

		node->prev = cursor;
		cursor->next = node;
	}

	return (node);
}
