#include "main.h"

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
