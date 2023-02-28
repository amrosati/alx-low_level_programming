#include "main.h"

/**
 * argstostr - concatenates all the arguments
 * @ac: number of args
 * @av: args array
 *
 * Return: pointer to a new string (on success)
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	size_t j, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, size = 0; i < ac; i++)
		size += (strlen(*(av + i)) + 1);

	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac; i++, j++)
	{
		str = strcat(str, *(av + i));
		j += strlen(*(av + i));
		*(str + j) = '\n';
	}

	*(str + (size + 1)) = '\0';

	return (str);
}
