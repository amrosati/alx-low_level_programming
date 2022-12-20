#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n;

	n = _strlen(str);
	if (n % 2 != 0)
		n++;
	n /= 2;

	for (; *(str + n) != '\0'; n++)
		_putchar(*(str + n));
	_putchar('\n');
}

/**
 * _strlen - get length of string
 * @s: string to calculate
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i, l;

	l = 0;
	for (i = 0; *(s + i) != '\0'; i++)
		l++;

	return (l);
}
