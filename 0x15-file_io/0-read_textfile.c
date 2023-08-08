#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads and prints a text file to the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of letters read and printed, or 0 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	FILE *file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	char *buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	ssize_t bytes_read = fread(buffer, 1, letters, file);
	if (bytes_read <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[bytes_read] = '\0';
	printf("%s", buffer);

	free(buffer);
	fclose(file);

	return (bytes_read);
}

