#include "main.h"
#include <string.h>

/**
 * _strncpy - Copies string into buffer
 * @dest: Where the string will be copied to
 * @src: The string to be copied
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to string copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
