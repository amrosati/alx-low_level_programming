#include <stdio.h>

/**
 * main - prints the program name
 * @argc: number of program args
 * @argv: array of the args
 *
 * Return: 0 (on success)
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
		return (1);

	printf("%s\n", argv[0]);

	return (0);
}
