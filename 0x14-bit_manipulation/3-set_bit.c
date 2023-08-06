#include "main.h"

/**
 * set_bit - Sets the bit at a given index to 1
 * @n: Number to process
 * @index: The bit's index
 *
 * Return: 1 (on success), -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >> 6)
		return (-1);

	*n |= (1 << index);

	return (1);
}
