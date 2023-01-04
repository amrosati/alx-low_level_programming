#include "main.h"

/**
 * _strlen_recursion - counts length of a string
 * @s: string to count
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int x;

	if (!*s)
		return (0);

	x = 1 + _strlen_recursion(s + 1);

	return (x);
}
