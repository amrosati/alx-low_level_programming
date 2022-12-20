#include "main.h"

/**
 * print_rev - Print a string in reverse order
 * @s: String to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int j = -1;

	for (; *(s + j) != '\0'; j++)
		i++;
	for (; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
