#include "main.h"

/**
 * main - copies the content of a file to another file
 * @ac: number of args (must be 3)
 * @av: args array
 *
 * Return: 1 (on success)
 */
int main(int ac, char **av)
{
	/* Declare used variables */
	int fd_to, fd_from;
	mode_t mode;

	/* Check input */
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Open file descriptors and check for errors */
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	if (copy_data(av[1], fd_from, av[2], fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: No enough memory\n");
		exit(EXIT_FAILURE);
	}

	/* Close files */
	close_files(2, fd_from, fd_to);

	/* DONE */
	exit(EXIT_SUCCESS);
}

/**
 * copy_data - copies data from a file to another
 * @filename1: filename
 * @fd_from: fd from
 * @filename2: filenam
 * @fd_to: fd to
 *
 * Return: 1 (on success)
 */
int copy_data(char *filename1, int fd_from, char *filename2, int fd_to)
{
	int r, w; 
	char *buf;

	buf = malloc(BUFSIZ);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
		exit(99);
	}

	do {
		r = read(fd_from, buf, BUFFSIZ);
		if (fd_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename1);
			exit(98);
		}
		else if (r == 0)
			break;

		w = write(fd_to, buf, r);
		if (fd_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
			exit(98);
		}

	} while (r > 0);

	free(buf);
	return (1);
}

/**
 * close_files - closes opened fds
 * @n: number of file descriptor
 *
 * Return: 1 (on success)
 */
int close_files(int n, ...)
{
	int fd;
	va_list args;

	va_start(args, n);

	for (; n > 0; n--)
	{
		fd = va_arg(args, int);
		if (close(fd))
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
	}

	va_end(args);
	return (1);
}
