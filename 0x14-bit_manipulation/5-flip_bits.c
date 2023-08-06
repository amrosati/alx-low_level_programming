#include "main.h"

/**
 * flip_bits - Computes the number of bits need to flip
 *		to get from a number to another.
 * @n: The number from
 * @m: The number to
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b = 0;

	n ^= m;

	while (n)
	{
		b += n & 1;
		n >>= 1;
	}

	return (b);
}
