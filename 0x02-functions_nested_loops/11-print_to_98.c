#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from @n to 98
 * @n: number to start printing from (included)
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);

		return;
	}

	while (n < 98)
		printf("%d, ", n++);
	printf("%d\n", n);
}
