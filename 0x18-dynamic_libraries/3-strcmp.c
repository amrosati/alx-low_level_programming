#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: Compares the strings according to ASCII value of each
 * character.
 *
 * Return: 0 If they match,
 * + if the first string is larger,
 * - if the second string is larger
 */
int _strcmp(char *s1, char *s2)
{
	int deff = 0;
	int i;

	for (i = 0; *(s1 + i) != '\0' || *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) > *(s2 + i))
		{
			deff += (int) (*(s1 + i) - *(s2 + i));
			break;
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			deff -= (int) (*(s2 + i) - *(s1 + i));
			break;
		}
	}

	return (deff);
}
