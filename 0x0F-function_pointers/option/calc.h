#ifndef _CALC_H_
#define _CALC_H_

/* Include */
#include <stdlib.h>
#include <stdio.h>

/* Data Structures */

/**
 * struct op - Struct op
 *
 * @op: option of operation
 * @f: function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Functions Prototypes */
int op_add(int, int);
int op_mul(int, int);
int op_sub(int, int);
int op_div(int, int);
int op_mod(int, int);
int (*get_op_func(char *))(int, int);

#endif /* _CALC_H_ */
