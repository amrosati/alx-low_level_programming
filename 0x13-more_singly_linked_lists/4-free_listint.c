#include "lists.h"

/**
 * free_listint - frees a listint_t list memory
 * @head: head of list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);

	free(head);
}
