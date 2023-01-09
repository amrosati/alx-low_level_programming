#include <stdio.h>

int _atoi(char *);

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


	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	res = x * y;

	printf("%d\n", res);

	return (0);
}

/**
 * _atoi - Converts number string to integers
 * @s: String pointer to be converted
 *
 * Return: Integer value of the number string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	char *tmp = s;

	while (*tmp != '\0' && (*tmp < '0' || *tmp > '9'))
	{
		if (*tmp == '-')
			sign *= -1;
		tmp++;
	}
	if (*tmp != '\0')
		do {
			num = num * 10 + (*tmp - '0');
			tmp++;
		} while (*tmp >= '0' && *tmp <= '9');

	return (num * sign);
}
