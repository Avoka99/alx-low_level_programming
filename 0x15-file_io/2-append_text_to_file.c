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
	int file;
	int wrt, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	file = open(filename, O_WRONLY | O_APPEND);
	wrt = write(file, text_content, len);
	if (file == -1 || wrt == -1)
		return (-1);

	close(file);

	return (1);
}
