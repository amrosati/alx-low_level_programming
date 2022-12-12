#include <stdio.h>

/**
 * main - Prints all single digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
