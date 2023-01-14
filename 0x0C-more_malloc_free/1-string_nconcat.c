#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes to copy from s2.
 *
 * Description: the function concatenate the first 'n' bytes from "s2"
 * to "s1" and null terminated.
 * If 'n' is greater or equal to the length of "s2"
 * then it use the entire string.
 * If "NULL" is passed it treats it as an empty string.
 *
 * Return: On success - pointer to a newly allocated memory contains "s1"
 * and the first 'n' bytes of "s2", null terminated.
 * On failure - "NULL".
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len, size = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < 0)
		return (NULL);

	len = _strlen(s2);
	if (n >= len)
		n = len;

	size = (_strlen(s1) + n) + 1;

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(str + i) = *(s1 + i);

	for (j = 0; j < n; j++)
		*(str + (i + j)) = *(s2 + j);

	*(str + (i + j)) = '\0';

	return (str);
}

/**
 * _strlen - counts length of a string
 * @s: string to count
 *
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		len++;

	return (len);
}
