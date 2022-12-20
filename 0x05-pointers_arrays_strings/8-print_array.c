#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: array to be printed
 * @n: length of array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	if (n < 1 || n > (sizeof(a) / 4))
		return;

	int i = 0;

	for (; i < (n - 1); i++)
		printf("%d, ", *(a + i));
	printf("%d\n", *(a + i));
}
