#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to head of the list
 *
 * Return: data of deleted node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp = NULL;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	n = tmp->n;

	free(tmp);
	return (n);
}
