#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints separated numbers to stdout
 * @separator: string to be printed between numbers
 * @n: number of numbers to print
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list params;

	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(params, int);
		printf("%d", num);
		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}

	printf("\n");
}
