#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip
 *		to get from one number to another
 * @n: Number to flip
 * @m: Number to flip to
 *
 * Return: Number of bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	for (; n || m; n >>= 1, m >>= 1)
		if ((n & 1) != (m & 1))
			bits++;

	return (bits);
}
