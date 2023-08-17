#ifndef __LISTS_H__
#define __LISTS_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - Doubly linked list
 * @n: integer
 * @prev: previous node
 * @next: next node
 *
 * Description: Doubly linked list node structure
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


#endif /* __LISTS_H__ */
