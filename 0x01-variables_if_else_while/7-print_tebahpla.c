#include <stdio.h>

/**
 * main - Entery
 *
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
