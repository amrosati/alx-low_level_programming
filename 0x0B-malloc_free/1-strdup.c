#include "main.h"

/**
 * _strdup - duplicates a string dynamically.
 * @str: string to be duplicated.
 *
 * Return: "NULL" if str is "NULL",
 * "NULL" if insufficient memory was available,
 * a pointer to the duplicated string (on success).
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (i = 1; *(str + i) != '\0';)
		i++;

	dup = malloc(sizeof(char) * i + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		*(dup + i) = *(str + i);
	*(dup + i) = *(str + i);

	return (dup);
}
