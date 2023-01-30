#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @head: head of the list
 *
 * Return: number of nodes printed
 */
size_t print_listint(const listint_t *head)
{
	if (head == NULL)
		return (0);

	printf("%d\n", head->n);

	return (1 + print_listint(head->next));
}
