#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array to reverse
 * @n: Number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
		swap(a + i, a + (n - 1 - i));
}

/**
 * swap - Swaps two integers values
 * @num1: first integer
 * @num2: second integer
 *
 * Return: void
 */
void swap(int *num1, int *num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
