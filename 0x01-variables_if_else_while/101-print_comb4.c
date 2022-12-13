#include <stdio.h>

/**
 * main - Entery
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 56; i++)
		for (j = i + 1; j < 57; j++)
			for (k = j + 1; k < 58; k++)
			{
				putchar((char) i);
				putchar((char) j);
				putchar((char) k);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
