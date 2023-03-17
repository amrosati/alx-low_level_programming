#include "lists.h"

/**
 * dlistint_len - counts length of a dlistint_t list
 * @head: head of list
 *
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *head)
{
	if (head == NULL)
		return (0);

	return (1 + dlistint_len(head->next));
}
