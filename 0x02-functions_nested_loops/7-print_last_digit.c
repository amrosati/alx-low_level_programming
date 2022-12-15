#include "main.h"

/**
 * print_last_digit - prints the last digit in a number
 * @n: number to be operated on
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int tmp = n > 0 ? n % 10 : (n * -1) % 10;

	_putchar('0' + tmp);
	return (tmp);
}
