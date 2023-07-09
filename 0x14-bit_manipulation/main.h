#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <string.h>


/** Functions Prototypes **/
int _putchar(char);
unsigned int binary_to_uint(const char *);
void print_binary(unsigned long int);
int get_bit(unsigned long int, unsigned int);
int set_bit(unsigned long int *, unsigned int);
int clear_bit(unsigned long int *, unsigned int);


#endif /* __MAIN_H__ */
