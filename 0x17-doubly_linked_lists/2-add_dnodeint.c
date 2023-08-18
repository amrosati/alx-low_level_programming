#include "lists.h"

/**
 * add_dnodeint - Inserts a node at the beginning of a doubly linked list
 * @head: Pointer to the head of the list
 * @n: Number to insert
 *
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (!head)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head)
		node->next->prev = node;

	*head = node;

	return (node);
}
