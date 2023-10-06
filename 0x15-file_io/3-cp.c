#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#define BUFFER_SIZE 1024
char *create_buffer(const char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(const char *file)
{
	int fd;
	char *buffer;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		return (NULL);
	}

	buffer = (char *)malloc(BUFFER_SIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed.\n");
		close(fd);
		return (NULL);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (errno == EBADF ? -1 : errno));
	}
}
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	const char *source_filename = argv[1];
	const char *destination_filename = argv[2];

	char *buffer;
	int fd_to, fd_from;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	buffer = create_buffer(source_filename);
	if (buffer == NULL)
	{
		return (98);
	}

	fd_to = open(destination_filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", destination_filename);
		close_file(fd_to);
		free(buffer);
		return (99);
	}

	dprintf(STDOUT_FILENO, "Copying from %s to %s...\n", source_filename, destination_filename);

	fd_from = open(source_filename, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_filename);
		close_file(fd_to);
		free(buffer);
		return (98);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", destination_filename);
			close_file(fd_from);
			close_file(fd_to);
			free(buffer);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_filename);
		close_file(fd_from);
		close_file(fd_to);
		free(buffer);
		return (98);
	}

	close_file(fd_from);
	close_file(fd_to);
	free(buffer);

	dprintf(STDOUT_FILENO, "Copy completed successfully.\n");

	return (0);
}

