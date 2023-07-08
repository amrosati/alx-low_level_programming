#include "../main.h"

/**
 * main - test code
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);

	return (0);
}
