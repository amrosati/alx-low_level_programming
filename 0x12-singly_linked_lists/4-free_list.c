#include "lists.h"

/**
 * free_list - frees a list_t list from memory
 * @head: pointer to head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);

	if (head->str != NULL)
		free(head->str);
	free(head);
}
