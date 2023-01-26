#include "lists.h"

/**
 * list_len - counts number of elements in a linked list
 * @head: pointer to head of the list
 *
 * Return: the number counted
 */
size_t list_len(const list_t *head)
{
	if (head == NULL)
		return (0);

	return (1 + list_len(head->next));
}
