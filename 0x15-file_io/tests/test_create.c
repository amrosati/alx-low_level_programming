#include "../main.h"

/**
 * main - test create_file()
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s filename text\n", *argv);
		exit(1);
	}

	res = create_file(argv[1], argv[2]);
	if (res == 1)
		printf("SUCCESS\n");
	else
		printf("FAILURE\n");

	exit(0);
}
