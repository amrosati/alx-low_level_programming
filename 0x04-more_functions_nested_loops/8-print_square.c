#include "main.h"

/**
 * print_square - prints a square to stdout
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = size; i; i--)
	{
		for (j = size; j; j--)
			_putchar('#');
		_putchar('\n');
	}
}
