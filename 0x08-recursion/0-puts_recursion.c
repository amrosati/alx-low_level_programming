#include "main.h"

/**
 * _puts_recursion - prints a string recursively followed by a newline
 * @s: string to print to stdout
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
