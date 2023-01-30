#include "lists.h"

/**
 * add_nodeint - inserts a node at the beginning of a listint_t list
 * @head: address of the head of a list
 * @n: data
 *
 * Return: address of new node (on success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
