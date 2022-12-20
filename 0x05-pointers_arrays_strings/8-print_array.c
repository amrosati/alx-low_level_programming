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
	if (n < 1)
		return;

	int i = 0;

	for (; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", *(a + i));
			break;
		}
		printf("%d, ", *(a + i));
	}
}
