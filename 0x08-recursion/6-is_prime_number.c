#include "main.h"

/**
 * is_prime_number - figures if the number is prime number
 * @n: number to compute
 *
 * Return: if the number is prime - 1, otherwise - 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (fun(n, n - 1));
}

/**
 * fun - iterates till 1
 * @n: number to compute
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int fun(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);

	if (n % i > 0)
		return (fun(n, i - 1));

	return (1);
}
