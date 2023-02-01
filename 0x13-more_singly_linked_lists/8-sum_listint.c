#include "lists.h"

/**
 * sum_listint - sums all the data of a listint_t linked list
 * @head: pointer of head of list
 *
 * Return: the sum of n
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_listint(head->next));
}
