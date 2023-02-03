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
	unsigned int num;
	int idx, position, val;

	if (b == NULL)
		return (0);

	for (idx = 0; b[idx] != '\0'; idx++)
		if (b[idx] < '0' || b[idx] > '1')
			return (0);

	idx--;
	for (num = 0, position = 0; idx >= 0; idx--, position++)
	{
		val = b[idx] - '0';
		val *= _pow(position);
		num += (unsigned int) val;
	}

	return (val);
}

/**
 * _pow - returns 2 to the power of the givin number
 * @n: number
 *
 * Return: the result
 */
int _pow(int n)
{
	if (n == 0)
		return (1);

	return (2 * _pow(n - 1));
}
