#include "main.h"

void handle_error(const char *message);
int open_files(const char *src_path, const char *dest_path,
		int *read_fd, int *write_fd);
int copy_file(int read_fd, int write_fd);
int close_files(int read_fd, int write_fd);


/**
 * handle_error - Prints an error message to stderr
 * @message: The error message to print
 */
void handle_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * open_files - opens the source and destination files
 * @src_path: Path to the source file
 * @dest_path: Path ro the destination file
 * @read_fd: pointer to the variable to store the souce fd
 * @write_fd: pointer to the variable to store the destination fd
 * Return: 1 on success, 0 on failure
 */
int open_files(const char *src_path, const char *dest_path,
		int *read_fd, int *write_fd)
{
	*read_fd = open(src_path, O_RDONLY);
	if (*read_fd == -1)
	{
		handle_error("Can't read from file");
		return (0);
	}
	*write_fd = open(dest_path, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (*write_fd  == -1)
	{
		close(*read_fd);
		handle_error("Can't write to file");
		return (0);
	}
	return (1);
}

/**
 * copy_file - Copies the content of a file to another file
 * @read_fd: source file descriptor
 * @write_fd: destination file descriptor
 * Return: 1 on success, 0 on failure
 */
int copy_file(int read_fd, int write_fd)
{
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	while ((bytes_read = read(read_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(write_fd, buffer, bytes_read);

		if (bytes_written == -1)
		{
			close(read_fd);
			close(write_fd);
			handle_error("Can't write to file");
			return (0);
		}
	}
	if (bytes_read == -1)
	{
		close(read_fd);
		close(write_fd);
		handle_error("Cant read from file");
		return (0);
	}
	return (1);
}


/**
 * close_files - Closes the source and destination files
 * @read_fd: source file descriptor
 * @write_fd: destination descriptor
 * Return: 1 0n success, 0 on failure
 */
int close_files(int read_fd, int write_fd)
{
	if (close(read_fd) == -1 || close(write_fd) == -1)
	{
		handle_error("Can't close file");
		return (0);
	}
	return (1);
}


/**
 * main - Copies the content of a file to another file
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, or exit with error codes
 */
int main(int argc, char *argv[])
{
	int read_fd, write_fd;

	if (argc != 3)
	{
		handle_error("Usage: cp file_from file_to");
		exit(97);
	}

	if (!open_files(argv[1], argv[2], &read_fd, &write_fd))
		exit(98);
	if (!copy_file(read_fd, write_fd))
		exit(99);
	if (!close_files(read_fd, write_fd))
		exit(100);
	return (0);
}
