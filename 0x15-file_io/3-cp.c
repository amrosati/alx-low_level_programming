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
	int fd_to, fd_from, r, w;
	char *buf = NULL;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(av[2]);
	fd_from = open(av[1], O_RDONLY);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		r = read(fd_from, buf, BUFFSIZ);
		if (fd_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		w = write(fd_to, buf, r);
		if (fd_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}

		fd_to = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	close_file(fd_from);
	close_file(fd_to);

	exit(EXIT_SUCCESS);
}

/**
 * create_buffer - allocates memory for buffer
 * @file: filename
 *
 * Return: pointer to memory block (on success)
 */
char *create_buffer(char *file)
{
	char *buf = malloc(sizeof(char) * BUFFSIZ);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - closes opened fd
 * @fd: file descriptor
 *
 * Return: nothing
 */
void close_file(int fd)
{
	if (close(fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
