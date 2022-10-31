#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: text to be added to the file
 * Return: an int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int nofl, rw, fd;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (nofl = 0; text_content[nofl]; nofl++)
			;
		rw = write(fd, text_content, nofl);

		if (rw == -1)
		{
			return (-1);
		}
	}

	close(fd);

	return (1);
}
