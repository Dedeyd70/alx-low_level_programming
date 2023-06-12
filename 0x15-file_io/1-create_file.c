#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The name of the file to create
 * @text_content: the NULL-terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, nwritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		nwritten = write(fd, text_content, len);
		if (nwritten == -1 || nwritten != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
