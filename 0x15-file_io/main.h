#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

#define BUFFSIZ 1024
/* Functions Prototypes */
int _putchar(char);
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);
int copy_data(char *, int, char *, int);
int close_files(int, ...);

#endif /* _MAIN_H_ */
