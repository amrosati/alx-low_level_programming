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
	int i;
	char *p = NULL;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
		{
			p = s + i;
			break;
		}

	return (p);
}
