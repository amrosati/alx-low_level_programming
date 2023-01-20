#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers to search
 * @size: number of elements
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: -1 - if no element matches, size <= 0, or NULL arguments
 * index of the element - if found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
