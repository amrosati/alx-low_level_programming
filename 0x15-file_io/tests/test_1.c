#include "../main.h"

/**
 * main - Test code
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s filename text\n", *av);
		exit(EXIT_FAILURE);
	}

	n = create_file(*(av + 1), *(av + 2));
	printf("-> %ld)\n", n);

	return (0);
}
