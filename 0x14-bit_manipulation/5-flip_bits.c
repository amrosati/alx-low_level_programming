#include <main.h>

/**
 * flip_bits - counts the number of bits needed to be flipped
 * @n: number to flip
 * @m: number to flip to
 *
 * Return: number of bits needed to flip n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, bits;

	xor = n ^ m;
	bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
