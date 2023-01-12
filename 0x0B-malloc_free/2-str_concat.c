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
		i = 0;
	else
		i = str_len(s1);

	if (s2 == NULL)
		j = 0;
	else
		j = str_len(s2);

	size = i + j;

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	for (; i != 0; i--)
		*(str + i) = *(s1 + i);

	for (; j != 0; j--)
		*(str + j) = *(s2 + j);

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
