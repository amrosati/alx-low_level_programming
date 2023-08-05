#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Binary number in a string format
 *
 * Return: The decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i, j = 0;

	if (!b)
		return (0);

	for (i = strlen(b) - 1; i >= 0; i--, j++)
	{
		if ((b[i] - '0') != 1 && (b[i] - '0') != 0)
			return (0);
		val += (1 << j) * (b[i] - '0');
	}

	return (val);
}
