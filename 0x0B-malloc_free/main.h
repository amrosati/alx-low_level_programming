#ifndef MAIN_H
#define MAIN_H

/* Libraries Uesed */
#include <stdlib.h>

/* Functions Prototypes */
int _putchar(char);
char *create_array(unsigned int, char);
char *_strdup(char *);
char *str_concat(char *, char *);
int str_len(char *);
int **alloc_grid(int, int);
void _memset(int *, int, unsigned int);
void free_mem(int **, unsigned int);

#endif /* MAIN_H */
