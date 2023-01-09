#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to look into
 * @accept: the bytes to look for
 *
 * Return: a pointer to the byte in "s" that matches one of the
 * bytes in "accept", or "NULL" if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *tmp = s;
	char *find;

	for (; *tmp; tmp++)
		for (find = accept; *find; find++)
			if (*tmp == *find)
				return (tmp);

	return (0);
}
