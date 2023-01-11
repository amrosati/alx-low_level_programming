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
	unsigned int i, j, size = 0;
	char *str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		size++;
	for (i = 0; *(s2 + i) != '\0'; i++)
		size++;

	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(str + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; i++, j++)
		*(str + i) = *(s2 + j);
	*(str + i) = '\0';

	return (str);
}
