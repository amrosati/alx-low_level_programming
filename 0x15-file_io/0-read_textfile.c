#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: Filename
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print, or 0 if:
 *		the file can not be opened or read,
 *		@filename is NULL,
 *		or write() fails or does not write the expected amount.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nr;
	char *buf = NULL;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters + 1);
	if (!buf)
		goto error;

	nr = read(fd, buf, letters);
	if (nr == -1)
		goto error;

	*(buf + letters) = '\0';
	if (write(STDOUT_FILENO, buf, nr) == -1)
		goto error;

	free(buf);
	close(fd);
	return (nr);

error:
	free(buf);
	close(fd);
	return (0);
}
