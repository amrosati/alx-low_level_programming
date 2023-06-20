#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: String to change
 * @to: The value to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
