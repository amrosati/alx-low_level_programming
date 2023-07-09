#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to the value
 * @index: Index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (*n & (1 << index))
		*n ^= 1 << index;

	return (1);
}
