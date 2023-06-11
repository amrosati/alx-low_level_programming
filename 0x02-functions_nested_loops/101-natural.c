#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 that are below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int n, sum = 0;

	for (n = 1023; n >= 0; n--)
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;

	printf("%d\n", sum);

	return (0);
}
