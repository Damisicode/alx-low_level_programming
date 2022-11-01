#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name of file to be printed
 * @letters: Number of letters o be printed
 * Return: Actual number of letters printed and 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t size, w_size;
	char *c = malloc(sizeof(char) * letters);

	if (c == NULL)
		return (0);

	if (filename == NULL)
	{
		free(c);
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	size = read(fd, c, letters);
	if (size == -1)
		return (0);

	w_size = write(STDOUT_FILENO, c, size);

	if (size == -1 || w_size != size)
		return (0);

	free(c);
	close(fd);
	return (w_size);
}
