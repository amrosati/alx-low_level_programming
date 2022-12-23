#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: String to change
 *
 * Return: String in uppercase
 */
char *string_toupper(char *src)
{
	char *str = src;
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= (char) 32;
	}
	
	return (str);
}
