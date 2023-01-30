#include "lists.h"

/**
 * add_nodeint_end - inserts a node at end of a listint_t list
 * @head: head of list
 * @n: data for new node
 *
 * Return: address of new node (on success)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *cursor;

	new_node = cursor = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	cursor = *head;
	while (cursor->next != NULL)
		cursor = cursor->next;

	new_node->next = cursor->next;
	cursor->next = new_node;

	return (new_node);
}
