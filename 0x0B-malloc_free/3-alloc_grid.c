#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array of integers.
 * @width: length of array of arrays.
 * @height: length of each array in the array of arrays.
 *
 * Return: "NULL" (on failure), a pointer to 2d array (on success).
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **ptrs_arr = NULL;

	if (width < 1 || height < 1)
		return (NULL);

	ptrs_arr = malloc(sizeof(int *) * height);
	if (ptrs_arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(ptrs_arr + i) = malloc(sizeof(int) * width);
		if (*(ptrs_arr + i) == NULL)
		{
			free_mem(ptrs_arr, i);
			return (NULL);
		}

		_memset(*(ptrs_arr + i), 0, width);
	}

	return (ptrs_arr);
}

/**
 * _memset - initialize memory block with given value
 * @ptr: memory to initialize
 * @val: value to initialize with
 * @n: size of memory block
 *
 * Return: void
 */
void _memset(int *ptr, int val, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(ptr + i) = val;
}

/**
 * free_mem - frees block of memory
 * @ptr: memory to free
 * @n: size of memory
 *
 * Return: nothing
 */
void free_mem(int **ptr, int n)
{
	int i;

	for (i = 0; i < n; i++)
		free(*(ptr + i));

	free(ptr);
}
