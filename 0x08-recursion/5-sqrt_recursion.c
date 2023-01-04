#include "main.h"

/**
 * _sqrt_recursion - compute the natural square root
 * @n: number to calculate
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);

	return (fun(n, 1));
}

/**
 * fun - get square root givin a counter
 * @n: number
 * @x: counter
 *
 * Return: square root
 */
int fun(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x > n)
		return (-1);

	return (fun(n, x + 1));
}
