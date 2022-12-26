#include "main.h"

/**
 * print_triangle - prints a triangle to stdout
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');
		for (k = j; k < size; k++)
			_putchar('#');
		_putchar('\n');
	}
}
