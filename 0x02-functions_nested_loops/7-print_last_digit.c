#include "main.h"

/**
 * print_last_digit - prints the last digit in a number
 * @n: number to be operated on
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int tmp = n % 10;

	tmp = _abs(tmp);
	_putchar('0' + tmp);
	return (tmp);
}
