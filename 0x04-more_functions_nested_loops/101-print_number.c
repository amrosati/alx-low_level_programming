#include "main.h"

/**
 * print_number - prints an integer to stdout using ``_putchar()``
 * @n: The number to print
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -1 * num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
