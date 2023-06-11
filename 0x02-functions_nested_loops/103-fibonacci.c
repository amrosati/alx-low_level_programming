#include <stdio.h>

/**
 * main - Prints the sum of the even-values fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, fibn = 0, sum;

	while (fibn <= 4000000)
	{
		fibn = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibn;

		if ((fib1 % 2) == 0)
			sum += fib1;
	}

	printf("%lu\n", sum);

	return (0);
}
