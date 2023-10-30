#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The NULL-terminated string to append.
 *
 * Return: 1 on success, -1 on failure.
 *         -1 if filename is NULL or if text_content is NULL.
 *         -1 if the file doesn't exist or if you don't have write permissions.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}

	fclose(file);

	return (1);
}
