#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to string after concatenation, "NULL" (on failure).
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size;
	char *str = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = (str_len(s1) + str_len(s2)) + 1;

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(str + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++, i++)
		*(str + i) = *(s2 + j);

	*(str + size) = '\0';

	return (str);
}

/**
 * str_len - counts string length
 * @s: string to count
 *
 * Return: length of string
 */
int str_len(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}
