#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of args
 * @argv: args array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, res = 0;
	char *x;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		x = argv[i];
		for (j = 0; x[j] > '\0'; j++)
			if (x[j] < '0' || x[j] > '9')
			{
				printf("Error\n");
				return (1);
			}

		res += atoi(x);
	}

	printf("%d\n", res);

	return (0);
}
