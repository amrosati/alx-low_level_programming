#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: The buffer to print
 * @size: Size of the bytes to print
 *
 * Description: - The function prints the content of @size bytes of the
 *		buffer pointed by @b.
 *		- The output is 10 bytes per line.
 *		- Each line starts with the position of the first byte
 *		of the line in hexadecimal (8 chars), starting with 0.
 *		- Each line shows the hexadecimal content (2 chars) of
 *		the buffer, 2 bytes at a time, separated by a space.
 *		- Each line shows the content of the buffer.
 *		If the bytes is a printable character, prints the letter,
 *		if not, prints `.`.
 *		- Each line ends with a new line `\n`.
 *		- If @size is 0 or less, the output is a newline `\n`.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%.8x:", i);

		for (j = i; j < i + 10; j++)
		{
			if (j % 2 == 0)
				printf(" ");
			if (j < size)
				printf("%.2x", *(b + j));
			else
				printf("  ");
		}

		printf(" ");

		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
				break;
			if (*(b + j) < 32 || *(b + j) > 126)
				printf(".");
			else
				printf("%c", *(b + j));
		}

		printf("\n");
	}
}
