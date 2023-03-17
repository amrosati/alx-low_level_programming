#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
