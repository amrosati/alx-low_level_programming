#include "../main.h"

/**
 * main - test code
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	unsigned long int n;
	unsigned long int m;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s n m\n", *av);
		exit(EXIT_FAILURE);
	}

	n = (unsigned long int) atoi(av[1]);
	m = (unsigned long int) atoi(av[2]);

	printf("%u\n", flip_bits(n, m));

	return (0);
}
