#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments (must be three)
 * @argv: arguments used
 *
 * Return: 98 - if the number of arguments is wrong
 * 99 - if the operator is non if the given
 * 100 - if the user to divied or mod by 0
 * 0 (on success)
 */
int main(int argc, char **argv)
{
	char *op;
	int (*op_func)(int, int);
	int x, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	op_func = get_op_func(op);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if (y == 0 && (op[0] == '/' || op[0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(x, y));
	exit(EXIT_SUCCESS);
}
