#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Head of the list
 *
 * Return: Number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h)
	{
		printf("%d\n", h->n);
		return (1 + print_dlistint(h->next));
	}

	return (0);
}
