#include "../main.h"

/**
 * main - test append to file
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s filename text\n", *argv);
		exit(EXIT_FAILURE);
	}

	n = append_text_to_file(argv[1], argv[2]);

	printf("->> [%d]\n", n);

	exit(EXIT_SUCCESS);
}
