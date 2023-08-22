#include "main.h"

/**
 * _islower - check if the given char is in lowercase
 * @c: the character to check
 *
 * Return: 1 if is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
