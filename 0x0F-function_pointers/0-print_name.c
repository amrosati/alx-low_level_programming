#include "function_pointers.h"

/**
 * print_name - callback function to print a name
 * @name: name to print
 * @f: function to call
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
