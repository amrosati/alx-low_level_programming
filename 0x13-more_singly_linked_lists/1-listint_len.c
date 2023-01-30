#include "lists.h"

/**
 * listint_len - counts length of a linked listint_t list
 * @head: head of the list to count from
 *
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *head)
{
	if (head == NULL)
		return (0);

	return (1 + listint_len(head->next));
}
