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
	char buf[1024];
	ssize_t nr;

	if (argc != 3)
		err("Usage: cp file_from file_to", NULL, 0, 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		err("Error: Can't read from file ", argv[1], 0, 98);

	fd_to = creat(argv[2], 0664);
	if (fd_to == -1)
		err("Error: Can't write to ", argv[2], 0, 99);

	while ((nr = read(fd_from, buf, 1024)))
	{
		if (nr == -1)
			err("Error: Can't read from file ", argv[1], 0, 98);

		if (write(fd_to, buf, nr) == -1)
			err("Error: Can't write to ", argv[2], 0, 99);
	}

	if (close(fd_from))
		err("Error: Can't close fd ", NULL, fd_from, 100);
	if (close(fd_to))
		err("Error: Can't close fd ", NULL, fd_to, 100);

	exit(EXIT_SUCCESS);
}

/**
 * err - Prints the error msg and exits with given code
 * @msg: The specified msg
 * @filename: The file name
 * @fd: File descriptor if the error on closing
 * @code: The exit code
 */
void err(char *msg, char *filename, int fd, int code)
{
	if (!filename && !fd)
		dprintf(STDERR_FILENO, "%s\n", msg);
	else if (fd)
		dprintf(STDERR_FILENO, "%s%d\n", msg, fd);
	else
		dprintf(STDERR_FILENO, "%s%s\n", msg, filename);

	exit(code);
}
