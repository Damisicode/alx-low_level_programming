#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to be in the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, size, i;

	if (filename == NULL)
		return (-1);

	for (i = 0; text_content[i]; i++)
		;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		size = write(fd, "", i);
	else
		size = write(fd, text_content, i);

	if (size < 0)
		return (-1);

	close(fd);

	return (1);
}
