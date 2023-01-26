#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>

/* Data Structures */

/**
 * struct list_s - singly linked list
 * @str: malloc'ed string
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Functions Prototypes */
int _putchar(char);
size_t print_list(const list_t *);
size_t list_len(const list_t *);

#endif /* _LISTS_H_ */
