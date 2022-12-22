#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @breif Appends the @src string to the @dest string, overwriting the
 * terminating null byte at the end of @dest, and then adds a terminating
 * null byte.
 *
 * @dest: String to be added to
 * @src: String to be added
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dstlen = 0;
	int i = 0;
	int l = 0;

	for (; *(dest + l) != '\0'; l++)
		dstlen++;

	for (; *(src + i) != '\0'; i++)
		*(dest + (dstlen + i)) = *(src + i);
	if (*(src + i) == '\0')
		*(dest + (dstlen + i)) = *(src + i);

	return (dest);
}
