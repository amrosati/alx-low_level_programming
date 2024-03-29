#include "../lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	print_dlistint(head);
	insert_dnodeint_at_index(&head, 0, 1);
	print_dlistint(head);
	add_dnodeint_end(&head, 4);
	print_dlistint(head);
	insert_dnodeint_at_index(&head, 4, 5);
	print_dlistint(head);
	insert_dnodeint_at_index(&head, 2, 22);
	print_dlistint(head);
	
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 5, 4096);
	
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;

	return (EXIT_SUCCESS);
}
