#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message and exits with a specific code.
 * @code: The exit code to use.
 * @message: The error message format.
 * @arg: The argument to include in the error message.
 */
void print_error_and_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or exit codes for errors (97, 98, 99, 100).
 */
int main(int argc, char *argv[])
{
	int fd_to, fd_from;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	const char *source_filename = argv[1];
	const char *destination_filename = argv[2];

	if (argc != 3)
	{
		print_error_and_exit(97, "Usage: cp file_from file_to\n", "");
	}

	fd_from = open(source_filename, O_RDONLY);
	if (fd_from == -1)
	{
		print_error_and_exit(98, "Error: Can't read from file %s\n", source_filename);
	}

	fd_to = open(destination_filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error_and_exit(99, "Error: Can't write to file %s\n", destination_filename);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error_and_exit(99, "Error: Can't write to file %s\n", destination_filename);
		}
	}

	if (bytes_read == -1)
	{
		print_error_and_exit(98, "Error: Can't read from file %s\n", source_filename);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

