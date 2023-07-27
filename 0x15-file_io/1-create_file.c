#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file to create
 * @text_content: Text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t text_size;

	if (!filename)
		return (-1);

	fd = creat(filename, 0600);
	if (fd < 0)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	text_size = strlen(text_content);
	if (write(fd, text_content, text_size) == -1)
		return (-1);

	return (1);
}
