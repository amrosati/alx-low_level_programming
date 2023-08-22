#include "main.h"

/**
 * _strlen - Counts the length of a string
 * @s: The string to be computed
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	for (; s[i] != '\0'; i++)
		len++;

	return (len);
}
