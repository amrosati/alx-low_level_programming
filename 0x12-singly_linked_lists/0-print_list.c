#include "lists.h"

/**
 * print_list - prints all elements of a "list_t" list
 * @head: head of the list
 *
 * Description: if the string is NULL, "[0] (nil)" will be printed
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *head)
{
	if (head == NULL)
		return (0);

	if (head->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", head->len, head->str);

	return (1 + print_list(head->next));
}
