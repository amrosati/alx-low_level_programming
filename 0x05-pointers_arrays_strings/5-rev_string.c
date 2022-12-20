#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	int len = _strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
		swap(s + i, s + j);
}

/**
 * _strlen - Get length of a string
 * @s: String to be computed
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int l = 0;

	for (; *(s + l) != '\0';)
		l++;
	return (l);
}

/**
 * swap - swaps two characters values
 * @a: first char
 * @b: second char
 *
 * Return: void
 */
void swap(char *a, char *b)
{
	char tmp = *a;

	*a = *b;
	*b = tmp;
}
