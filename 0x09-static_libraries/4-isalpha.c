#include "main.h"

/**
 * _isalpha - check whether the char is a letter
 * @c: character to be checked
 *
 * Return: 1 if the character is a letter
 * 0 otherwise
 */
int _isalpha(int c)
{
	return (((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		? 1
		: 0);
}
