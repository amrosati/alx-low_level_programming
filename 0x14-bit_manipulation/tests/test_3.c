#include "../main.h"

/**
 * main - test code
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	unsigned long int n;
	unsigned int idx;
	int s;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s num index\n", *av);
		exit(EXIT_FAILURE);
	}

	n = (unsigned long int) atoi(av[1]);
	idx = (unsigned int) atoi(av[2]);

	s = set_bit(&n, idx);
	printf("[%d]\t%lu\n", s, n);

	return (0);
}
