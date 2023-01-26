#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: ponter to a pointer to the head of a list
 * @str: string to be duplicated as data to new node
 *
 * Return: address of new node (on success)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize data */
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	/* Insert into list */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
