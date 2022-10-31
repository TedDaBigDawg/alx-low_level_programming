#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: pointer to the text file
 * @letters: number of characters in the file
 * Return: number of chars printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t n, m;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
	{
		return (0);
	}

	n = read(fd, buf, letters);
	m = write(STDOUT_FILENO, buf, n);

	close(fd);
	free(buf);

	return (m);
}
