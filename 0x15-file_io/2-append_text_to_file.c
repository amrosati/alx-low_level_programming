#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: Text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t text_size;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	text_size = strlen(text_content);
	if (write(fd, text_content, text_size) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
