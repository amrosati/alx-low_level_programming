#include "main.h"

/**
 * rot13 - Encode/Decode a string using rot-13 cipher algorithm
 * @str: String to encode/decode
 *
 * Return: Encoded/Decoded string
 */
char *rot13(char *str)
{
	char alphas[] = {'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z'};
	char rot_keys[] = {'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
		'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q',
		'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l', 'm'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (str[i] == alphas[j])
			{
				str[i] = rot_keys[j];
				break;
			}

	return (str);
}
