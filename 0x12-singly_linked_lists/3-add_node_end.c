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
	list_t *cursor = *head;
	list_t *new_node = NULL;

	new_node = add_node(&cursor, str);
	if (new_node == NULL)
		return (NULL);

	if (cursor == NULL)
	{
		cursor = new_node;

		return (new_node);
	}

	while (cursor->next != NULL)
		cursor = cursor->next;

	cursor->next = new_node;

	return (new_node);
}

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
	new_node->next = NULL;
	*head = new_node;

	return (new_node);
}
