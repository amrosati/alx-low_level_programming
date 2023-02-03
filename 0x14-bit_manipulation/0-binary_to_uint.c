#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0's and 1's chars
 *
 * Return: the converted number, or 0 if
 * -there is one or more chars in the string b that is not binary
 * -b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		num = 2 * num + (b[i] - '0');
	}

	return (num);
}
