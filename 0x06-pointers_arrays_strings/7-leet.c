#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String to encode
 *
 * Return: Encoded string
 */
char *leet(char *str)
{
	int i = 0, ii;
	char leet[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (ii = 0; ii <= 7; ii++)
		{
			if (str[i] == leet[ii] ||
				       (str[i] - 32) == leet[ii])
			{
				str[i] = ii + 48;
			}
		}
		i++;
	}

	return (str);
}
