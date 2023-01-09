#include <stdio.h>

/**
 * main - prints number of args
 * @argc: number of args passed to cl
 * @argv: array of args
 *
 * Return: 0 (on success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
