#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to look in
 * @c: character to look for
 *
 * Return: a pointer to the first occurrence of the character 'c' in s
 * or NULL if the character not found
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
		if (*s == c)
			return (s);
	if (*s == c)
		return (s);

	return (0);
}
