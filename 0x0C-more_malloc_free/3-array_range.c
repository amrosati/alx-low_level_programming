#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first element of array
 * @max: last element of array
 *
 * Description: The array created should contain all the values
 * from "min" (included) to "max" (included), ordered.
 *
 * Return: a pointer to created array - success,
 * "NULL" - if "min" > "max",
 * "NULL" - if "malloc" fails.
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		*(arr + i) = min;

	return (arr);
}
