#include <stdio.h>

/**
 * main - prints arguments
 * @argc: number of args
 * @argv: args array
 *
 * Return: 0 (on success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
