#include "main.h"

/**
 * create_array - creates an array of chars initialized with a given char
 * @size: size of the array
 * @c: char to initialize array with
 *
 * Return: pointer to the array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ar + i) = c;

	return (ar);
}
