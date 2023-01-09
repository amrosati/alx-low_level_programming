#include <stdio.h>

/**
 * main - prints the program name
 *
 * Return: 0 (on success)
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
		return (1);

	printf("%s\n", argv[0]);
	
	return (0);
}
