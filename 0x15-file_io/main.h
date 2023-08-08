#ifndef __MAIN_H__
#define __MAIN_H__

#define BUFFSIZE 1024

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

/* Functions Prototypes */
int _putchar(char);
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);
void err(char *, char *, int, int);


#endif /* __MAIN_H__ */
