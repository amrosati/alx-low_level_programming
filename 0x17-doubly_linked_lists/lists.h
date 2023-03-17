#ifndef _LISTS_H_
#define _LISTS_H_

/* Include */
#include <stdlib.h>
#include <unistd.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* Functions Prototypes */
size_t print_dlistint(const dlistint_t *);
size_t dlistint_len(const dlistint_t *);

#endif /* _LISTS_H_ */
