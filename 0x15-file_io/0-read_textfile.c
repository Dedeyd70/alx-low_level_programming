#include "main.h"

/**
 * read_textfile - reading and printing contents of a file
 * @filename: name of the file to read
 * @letters: the max number of letters to read and print
 * Return: the actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwritten;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	nread = read(fd, buff, letters);
	if (nread == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	buff[nread] = '\0';
	nwritten = write(STDOUT_FILENO, buff, nread);
	if (nwritten < 0 || (ssize_t)nwritten != nread)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	free(buff);
	return (nwritten);
}
