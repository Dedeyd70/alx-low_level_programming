#include "main.h"

void print_error(const char *message);
void copy_file(const char *file_from, const char *file_to);


/**
 * print_error - Prints an error message to stderr
 * @message: The error message to print
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(1);
}

/**
 * copy_file - Copies the content of a file to another file
 * @file_from: The path of the source file
 * @file_to: The path of the destination
 */
void copy_file(const char *file_from, const char *file_to)
{
	struct stat src_stat;

	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error("Can't read from file");

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error("Can't write to file");
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			print_error("Can't write to file");
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error("Can't read fron file");
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
		print_error("Can't close file descriptor");
	
	if (stat(file_from, &src_stat) == -1)
		print_error("Can't get source file metadata");
	
	if (chown(file_to, src_stat.st_uid, src_stat.st_gid) == -1)
		print_error("Can't change ownership of destination file");
	if (chmod(file_to, src_stat.st_mode) == -1)
		print_error("Can't change permissions of destination file");
}

/**
 * main - Copies the content of a file to another file
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, 97 if the number of arguments is incorrect
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
