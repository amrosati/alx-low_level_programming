#include "main.h"

/**
 * _realloc - reallocates new memory for a pointer
 * @ptr: pointer to old memory
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Description: the contents of "ptr" will be copied to the newly
 * allocated memory, in the range from the start of "ptr" up to the
 * minimum of the old and new sizes. If the new size is bigger, the added
 * memory should not be initialized. If "ptr" is "NULL", then it allocates
 * memory of size "new_size".
 *
 * Return: pointer to new allocated memory - on success,
 * "ptr" - if the given sizes are equal,
 * "NULL" - if the new size is equal to zero,
 * "NULL" - if "malloc()" fails.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *mem = NULL;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);

		return (ptr);
	}

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);

		return (NULL);
	}

	if ((new_size > old_size) && (ptr != NULL))
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);

		for (i = 0; i < old_size; i++)
			*((char *) mem + i) = *((char *) ptr + i);

		free(ptr);
	}

	return (mem);
}
