#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: a poiner to a pointer to the head of a list
 * @str: string to duplicate into new node
 *
 * Return: address of new node (on success)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *cursor = *head;

	/* Move the cursor to the end of list */
	while (cursor && corsor->next)
		cursor = cursor->next;

	/* Initialize node and it's data */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* Insert at end of list */
	if (cursor)
		cursor = new_node;
	else
		cursor->next = new_node;

	return (new_node);
}
