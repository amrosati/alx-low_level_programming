#include "main.h"

/**
 * _strcpy - Copies string into buffer
 * @dest: String will be copied to
 * @src: String will be copied from
 *
 * Return: Pointer to the string copy
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = *(src + i);

	return (dest);
}
