#include "main.h"

/**
 * create_file - Creates a file
 * @filename: File's name
 * @text_content: String to write to the file
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, text_size;

	if (!filename)
		return (-1);

	fd = creat(filename, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (!text_content || *text_content == '\0')
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
