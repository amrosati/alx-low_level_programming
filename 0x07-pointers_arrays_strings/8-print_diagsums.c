#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: The matrix
 * @size: Size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int l = 0, r = size - 1, suml = 0, sumr = 0;

	for (; l < size * size; l += size + 1, r += size - 1)
	{
		suml += *(a + l);
		sumr += *(a + r);
	}

	printf("%d, %d\n", suml, sumr);
}
