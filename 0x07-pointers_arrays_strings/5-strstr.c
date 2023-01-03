#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to locate
 *
 * Description: finds the first occurrence of the substring "needle" in
 * the string "haystack". The terminating null bytes '\0'are not compared
 *
 * Return: a pointer to the beginning of the located substring
 * "NULL" if the substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *s, *ss;

	for (; *haystack; haystack++)
		for (s = haystack, ss = needle; *s && *ss && (*s == *ss); s++, ss++)
			if (!*(ss + 1))
				return (haystack);

	return (0);
}
