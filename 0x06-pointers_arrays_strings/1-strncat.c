#include "main.h"

/**
 * _strncat - Concatenate two strings
 * @dest: String to concatenate to
 * @src: String to concatenate from
 * @n: Number of bytes to concatenate from `src`
 *
 * Description: Similar to _strcat, except that
 * it will use at most `n` bytes from `src`, and `src` does not need
 * to be null-terminated if it contains `n` or more bytes.
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen, i, l;

	for (l = 0, destlen = 0; *(dest + l) != '\0'; l++)
		destlen++;
	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + (destlen + i)) = *(src + i);
	*(dest + (destlen + i)) = '\0';

	return (dest);
}
