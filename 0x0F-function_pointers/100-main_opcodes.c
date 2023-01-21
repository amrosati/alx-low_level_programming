#include <stdio.h>
#include <stdlib.h>

/* Function Prototypes */
void print_opcodes(char *, unsigned int);

/**
 * main - prints opcodes of itself
 * @argc: number of args (must be 2)
 * @argv: args array
 *
 * Return: 0 (on success)
 * 1 - if the number of args incorrect
 * 2 - if the number of bytes is negative
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *) &main, n);

	exit(EXIT_SUCCESS);
}

/**
 * print_opcodes - prints opcodes of givin bytes of a function
 * @func: function to get its opcodes
 * @n: number of bytes
 *
 * Return: nothing
 */
void print_opcodes(char *func, unsigned int n)
{
	unsigned int i;

	if (func == NULL || n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", func[i]);

		if (i < n - 1)
			printf(" ");
	}

	printf("\n");
}
