#include "main.h"

void print_err_with_fd(char *msg, char *opt, int status, int fd1);
void print_error(char *msg, char *opt, int status);

/**
 * main - Copies the contents of a file to another
 * @argc: The number of arguments
 * @argv: The argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, n_read, n_write;
	char buffer[1024];

	if (argc != 3)
		print_error("Usage: cp file_from file_to", "", 97);
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		print_error("Error: Can't read from file", argv[1], 98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
		print_err_with_fd("Error: Can't write to ", argv[2], 99, fd_from);

	n_read = read(fd_from, buffer, 1024);

	while (n_read > 0)
	{
		n_write = write(fd_to, buffer, n_read);
		if (n_read != n_write)
			print_err_with_fd("Error: Can't write to ", argv[2], 99, fd_from);

		n_read = read(fd_from, buffer, 1024);
	}

	if (n_read == -1)
		print_error("Error: Can't read from file ", argv[1], 98);
	n_read = close(fd_from);

	if (n_read < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	n_write = close(fd_to);

	if (n_write < 0)
		dprintf(STDERR_FILENO, "Error Can't close fd %d\n", fd_to), exit(100);

	return (0);
}

/**
 * print_error - Print the error and close the file descriptor
 * @msg: Error msg to show
 * @opt: optional arguments
 * @status: exit status code
 */
void print_error(char *msg, char *opt, int status)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, opt);
	exit(status);
}

/**
 * print_err_with_fd - Print the error and close the file descriptor
 * @msg: Error msg to show
 * @opt: optional arguments
 * @status: exit status code
 * @fd1: file descriptor
 */
void print_err_with_fd(char *msg, char *opt, int status, int fd1)
{
	if (fd1 > 0)
		close(fd1);
	print_error(msg, opt, status);
}
