#include "main.h"

/**
 * print_number - Prints numbers to stdout using _putchar
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int x = n;


	if (n < 0)
	{
		_putchar('-');
		x *= -1;
	}

	if ((x / 10) > 0)
		print_number(x / 10);

	_putchar((x % 10) + 48);
}
