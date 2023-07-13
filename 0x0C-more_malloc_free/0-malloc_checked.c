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

	ptr = malloc(b);

	if (ptr == NULL)
	{

		exit(98);
	}

	return (ptr);
}
