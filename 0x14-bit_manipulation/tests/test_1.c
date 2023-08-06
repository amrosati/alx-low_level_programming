#include "../main.h"

/**
 * main - test code
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	unsigned long int n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s num\n", *av);
		exit(EXIT_FAILURE);
	}

	n = (unsigned long int) atoi(av[1]);
	print_binary(n);
	printf("\n");

	return (0);
}
