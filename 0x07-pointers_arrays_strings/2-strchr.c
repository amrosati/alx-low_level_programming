#include "main.h"
#include <stddef.h>

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
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return ((s + i));

	return (NULL);
}
