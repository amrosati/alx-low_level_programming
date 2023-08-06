#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Number to process
 * @index: Index of the bit
 *
 * Return: 1 on success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >> 6)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
