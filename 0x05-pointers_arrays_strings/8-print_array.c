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
	int i = 0;

	for (; i < (n - 1); i++)
		printf("%d, ", *(a + i));
	printf("%d\n", *(a + i));
}
