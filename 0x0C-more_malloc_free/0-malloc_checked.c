#include "main.h"

/**
 * malloc_checked - allocates memory and checks for success
 * @b: size of memory requested
 *
 * Return: pointer to allocated memory (on success),
 * normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
