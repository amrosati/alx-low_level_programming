#include <stdio.h>

/**
 * main - Entery
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
		for (j = i + 1; j < 58; j++)
		{
			putchar((char) i);
			putchar((char) j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
