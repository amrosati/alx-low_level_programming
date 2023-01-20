#include "calc.h"

/**
 * get_op_func - selects the correct function to perfotm the operation
 * @s: operator string
 *
 * Return: a pointer to function tha performs the asked operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (s != NULL && ops[i].op != NULL && s[1] == '\0' && ops[i].op[0] == s[0])
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
