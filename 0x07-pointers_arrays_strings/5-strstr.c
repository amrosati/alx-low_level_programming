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
	char *str, *s, *ss;

	for (str = haystack; *str; str++)
	{
		if (*str == *needle)
			for (s = str + 1, ss = needle + 1; *s && *ss; s++, ss++)
			{
				if (*s != *ss)
					break;
				if (*(ss + 1))
					return (str);
			}
		
	}

	return (0);
}
