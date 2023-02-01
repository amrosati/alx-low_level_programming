#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: address of the pointer to head of list
 *
 * Description: sets the head to NULL
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	if (*head)
		free_listint(*head);

	*head = NULL;
}

/**
 * free_listint - frees a listint_t list
 * @head: head of list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
