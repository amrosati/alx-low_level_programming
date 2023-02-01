#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head of list
 * @idx: the index where the new node should be added
 * @n: data of new node
 *
 * Return: address of new node (on success)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *cursor = NULL;
	int i;

	if (head == NULL)
		return (NULL);

	if (*head == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	cursor = *head;
	i = (int) idx;
	while (cursor != NULL && cursor->next != NULL && i > 0)
	{
		cursor = cursor->next;
		i--;
	}

	if (cursor->next == NULL && i > 1)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = cursor->next;
	cursor->next = new_node;

	return (new_node);
}
