#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: File's name
 * @text_content: The text to append to file
 *
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, text_size;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	text_size = strlen(text_content);
	if (write(fd, text_content, text_size) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
