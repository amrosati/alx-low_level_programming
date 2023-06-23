#ifndef MAIN_H
#define MAIN_H

/* Include */
#include <stdlib.h>
#include <string.h>

/* Functions Prototypes */
int _putchar(char);
char *create_array(unsigned int, char);
char *_strdup(char *);
char *str_concat(char *, char *);
int str_len(char *);
int **alloc_grid(int, int);
void _memset(int *, int, unsigned int);
void free_grid(int **, int);
void free_mem(int **, int);
char *argstostr(int, char **);
char **strtow(char *);
size_t count_words(char *);
void free_words(char **);

#endif /* MAIN_H */
