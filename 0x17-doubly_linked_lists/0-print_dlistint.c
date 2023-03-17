#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints the elements of a dlistint_t list
 * @head: head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	if (head == NULL)
		return (0);

	printf("%d\n", head->n);

	return (1 + print_dlistint(head->next));
}
