#include "main.h"

/**
 * print_line - draws straight line to stdout
 * @n: number of '_' characters
 *
 * Return: void
 */
void print_line(int n)
{
	if (n < 1)
	{
		_putchar('\n');
		return;
	}

	for (; n; n--)
		_putchar('_');
	_putchar('\n');
}
