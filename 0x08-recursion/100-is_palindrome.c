#include "main.h"

/**
 * is_palindrome - Detects if a string is a palindrome
 * @s: String to check
 *
 * Return: 1 if @s is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_recur(s, 0, strlen(s) - 1));
}

/**
 * check_recur - Checks if a string is palindrome recursively
 * @s: String to check
 * @i: First index
 * @l: Last index
 *
 * Return: 1 if the string is palindrome
 */
int check_recur(char *s, int i, int l)
{
	if (*(s + i) == *(s + l))
	{
		if (i == l || i == l + 1)
			return (1);
		return (0 + check_recur(s, i + 1, l - 1));
	}
	return (0);
}
