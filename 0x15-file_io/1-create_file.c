#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 (Success) -1 (Failed)
 */

int create_file(const char *filename, char *text_content)
{
	int rw, fd, nofl;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (nofl = 0; text_content[nofl]; nof++)
		;

	rw = write(fd, text_content, nofl);

	if (rw == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
