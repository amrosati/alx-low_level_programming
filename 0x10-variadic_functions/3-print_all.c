#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: formated string consists of the chars c, i, f, and s.
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	const char *str = format;
	int c = 0;
	char *ss;
	va_list ap;

	va_start(ap, format);
	while (str && *str)
	{
		print_sep(*str, c);

		switch (*str)
		{
			case 'c':
				printf("%c", va_arg(ap, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), c = 1;
				break;
			case 's':
				ss = va_arg(ap, char *), c = 1;
				if (!ss)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ss);
				break;
		}

		str++;
	}

	printf("\n");
	va_end(ap);
}

/**
 * print_sep - prints a separator
 * @c: character to check
 * @n: condition
 *
 * Return: nothing
 */
void print_sep(char c, int n)
{
	char *s = "cifs";
	int j = 0;

	while (*(s + j))
	{
		if (c == *(s + j) && n)
		{
			printf(", ");
			break;
		}
		j++;
	}
}
