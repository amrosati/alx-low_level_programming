#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int l = _strlen(str);
	int i = 0;

	for (; i < l; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}

/**
 * _strlen - get length of a string
 * @s: string to get its length
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;
	int l = 0;

	for (; *(s + i) != '\0'; i++)
		l++;

	return (l);
}
