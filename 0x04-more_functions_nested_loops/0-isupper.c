#include "main.h"

/**
 * _isupper - Checks if the character is uppercase
 * @c: The character ascii value to be checked
 *
 * Return: If it's uppercase 1.
 * Otherwise 0.
 */
int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}
