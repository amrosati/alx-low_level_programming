#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two given numbers
 * @argc: number of args
 * @argv: args array
 *
 * Return: 0 (on success)
 */
int main(int argc, char *argv[])
{
	int x, y, res;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}


	x = atoi(argv[1]);
	y = atoi(argv[2]);
	res = x * y;

	printf("%d\n", res);

	return (0);
}
