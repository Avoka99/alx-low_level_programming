#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - aloocates memory using malloc
 * @b: integer
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	unsigned int i;
	char *error_msg;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		error_msg = "Error: malloc failed. Exiting with status 98.\n";

		for (i = 0; error_msg[i] != '\0'; i++)
			_putchar(error_msg[i]);

		exit(98);
	}

	return (ptr);
}
