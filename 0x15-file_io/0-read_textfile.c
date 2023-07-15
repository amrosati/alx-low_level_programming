#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: Filename
 * @letters: Number of bytes to read
 *
 * Return: The actual number of letters it could read and print, or
 *		0 if the file can not be opened or read,
 *		0 if @filename is NULL,
 *		0 if write fails or does not write the right amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nrd, nwr;
	int fd;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	free(buf);

	return (nwr);
}
