#include "main.h"

/**
 * print_rev - Print a string in reverse order
 * @s: String to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;
	/* Reverse print s */
	for (; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
