#include <stdio.h>

/**
 * main - find and print the largest prime factor of
 * the number 612852475143
 *
 * Return: 0 (on success)
 */
int main(void)
{
	long num = 612852475143;
	int factor = 0;
	long i, j;

	for (i = num - 1; i > 1; i--)
	{
		if (num % i == 0)
		{
			for (j = i - 1; j > 1; j--)
			{
				if (i % j == 0)
				{
					factor = j;
					break;
				}
			}
		}
		if (factor > 0)
			break;
	}

	printf("%ld\n", factor);

	return (0);
}
