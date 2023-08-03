#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Arguments array
 *
 * Return: 97 if the number of arguments is not correct,
 *	   98 if `file_from` does not exist, or can't be read,
 *	   99 if `file_to` can't be created, or can't be written to,
 *	   100 if the file can't be closed
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char *buf;
	ssize_t nr, nw;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = creat(argv[2], 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((nr = read(fd_from, buf, 1024)))
		write(fd_to, buf, 
