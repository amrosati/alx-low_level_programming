#ifndef _VARIADIC_FUNC_H_
#define _VARIADIC_FUNC_H_

/* Include */
#include <stdlib.h>
#include <stdarg.h>

/* Functions Prototypes */
int _putchar(char);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const, ...);
void print_sep(char, int);

#endif /* _VARIADIC_FUNC_H_ */
