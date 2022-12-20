#include "main.h"

/**
 * print_rev - Print a string in reverse order
 * @s: String to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int index = -1;
	int i = 0;

	/* Get the last index of s */
	for (; *(s + i) != '\0'; i++)
		index++;
	/* Reverse print s */
	for (; index >= 0; index--)
		_putchar(*(s + index));
	_putchar('\n');
}
