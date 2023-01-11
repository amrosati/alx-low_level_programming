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

	dup = malloc(sizeof(char) * sizeof(str));

	if (dup == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		*(dup + i) = *(str + i);
	*(dup + i) = *(str + i);

	return (dup);
}
