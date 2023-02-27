#include <stdio.h>
#include <stdlib.h>

/* Function Prototype */
int calc_coins(int *);

/**
 * main - prints the minimum number of coins
 * @argc: number of args (must be 2)
 * @argv: array of args
 *
 * Return: 0 (on success)
 */
int main(int argc, char **argv)
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(*(argv + 1));

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = calc_coins(&cents);

	printf("%d\n", coins);

	return (0);
}

/**
 * calc_coins - calculates the number of coins to make change for cents
 * @cents: pointer to the money
 *
 * Return: number of coins
 */
int calc_coins(int *cents)
{
	int coins = 0;

	for (; *cents >= 25; *cents -= 25)
		coins++;

	for (; *cents >= 10; *cents -= 10)
		coins++;

	for (; *cents >= 5; *cents -= 5)
		coins++;

	for (; *cents >= 2; *cents -= 2)
		coins++;

	for (; *cents >= 1; (*cents)--)
		coins++;

	return (coins);
}
