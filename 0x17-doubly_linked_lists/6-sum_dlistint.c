#include "lists.h"

/**
 * sum_dlistint - sums all the data of a dlistint_t linked list
 * @head: head of list
 *
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_dlistint(head->next));
}
