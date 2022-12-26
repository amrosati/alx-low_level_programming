#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * Description: replace multiples of three with "Fizz",
 * multiples of five with "Buzz",
 * and multiples of both with "FizzBuzz".
 * each number or word are separated by a space.
 *
 * Return: 0 (on success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
				printf(" ");
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");

	return (0);
}
