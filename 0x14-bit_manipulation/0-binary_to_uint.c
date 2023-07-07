#include "main.h"

/**
 * binary_to_uint - Converts binary strings to unsigned integer
 * @b: Binary string to convert
 *
 * Return: The converted number, or 0 if
 *		- There is on or more chars in @b is not 0 or 1
 *		- @b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int len, base;
	unsigned int value = 0;

	if (!b)
		return (0);

	len = strlen(b) - 1;

	for (base = 1; len >= 0; len--, base *= 2)
	{
		if (*(b + len) != '0' && *(b + len) != '1')
			return (0);

		if ((*(b + len) - '0') & 1)
			value += base;
	}

	return (value);
}
