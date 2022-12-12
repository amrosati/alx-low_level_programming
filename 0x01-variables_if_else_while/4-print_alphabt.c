#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
			putchar(a);
	}
	putchar('\n');
	return (0);
}
