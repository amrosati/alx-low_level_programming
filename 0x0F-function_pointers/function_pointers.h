#ifndef _FUNC_PTR_H_
#define _FUNC_PTR_H_

/* Include */
#include <stddef.h>
#include <stdlib.h>

/* Functions Prototypes */
void print_name(char *, void (*f)(char *));
void array_iterator(int *, size_t, void (*action)(int));

#endif
