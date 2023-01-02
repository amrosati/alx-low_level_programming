#include "main.h"

/**
 * _memset - fills the first n bytes of a givin memory area
 * @s: the givin memory area to fill
 * @b: the constant byte to insert in memory area
 * @n: size of the givin memory
 *
 * Description: fills the first 'n' bytes of the memory area pointed
 * to by 's' with the constant byte 'b'
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		*(s + i) = b;

	return (s);
}
