#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlistint_t linked list
 * @head: Head of the list
 *
 * Return: The sum of the list, or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	if (!head)
		return (0);

	return (head->n + sum_dlistint(head->next));
}
