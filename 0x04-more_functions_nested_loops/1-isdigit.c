#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: character to check
 *
 * Return: 1 if is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
