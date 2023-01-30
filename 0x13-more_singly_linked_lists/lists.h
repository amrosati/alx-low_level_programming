#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>

/** Data Structures **/

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/** Functions Prototypes **/
size_t print_listint(const listint_t *);
size_t listint_len(const listint_t *);
listint_t *add_nodeint(listint_t **, const int);

#endif /* _LISTS_H_ */
