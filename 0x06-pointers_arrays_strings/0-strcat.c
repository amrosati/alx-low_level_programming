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
	int dstlen = _strlen(dest);
	int srclen = _strlen(src);
	int n = dstlen + srclen;
	int i;

	*(dest + dstlen++) = *src;
	for (i = 1; i <= n; i++)
		*(dest + dstlen++) = *(src + i);

	return (dest);
}

/**
 * strlen - Calculate length of string excludeing terminating null byte
 * @str: string to compute
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int i, l;

	for (i = 0, l = 0; *(str + i) != '\0'; i++)
		l++;

	return (l);
}
