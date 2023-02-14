#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: the file path
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rw_letters, fd;
	char *buf = NULL;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		handle_err(&fd, buf);
		return (0);
	}

	rw_letters = read(fd, buf, letters);
	if (rw_letters == -1)
	{
		handle_err(&fd, buf);
		return (0);
	}

	rw_letters = write(STDOUT_FILENO, buf, rw_letters);
	if (rw_letters == -1)
	{
		handle_err(&fd, buf);
		return (0);
	}


	return (rw_letters);
}

/**
 * handle_err - handles closing file and freeing memory if any error occures
 * @fd: file descriptor to close
 * @ptr: pointer to memory to free
 *
 * Return: nothing
 */
void handle_err(int *fd, char *ptr)
{
	close(*fd);
	free(ptr);
}
