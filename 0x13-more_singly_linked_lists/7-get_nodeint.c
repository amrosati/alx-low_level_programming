#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head of list
 * @index: index of node, starting at zero
 *
 * Return: address of node (on success)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	return (get_nodeint_at_index(head->next, index - 1));
}
