#include "main.h"

/**
 * get_bit - Gets the bit value at a given index
 * @n: The number to process
 * @index: Index of the bit
 *
 * Return: Value of the bit, or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (n == 0 && index < 64)
		return (0);

	return ((n >> index) & 1);
}
