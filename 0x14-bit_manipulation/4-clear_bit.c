#include "main.h"

/**
 * clear_bit - sets a bit at a given index to 0
 * @n: pointer to bits
 * @index: index
 *
 * Return: 1 (on success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
