#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings separated by a givi separator
 * @separator: string to be printed between strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if ((separator != NULL)  && (i < n - 1))
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
