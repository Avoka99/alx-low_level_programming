#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb:number of elements
 * @size:number of bytes
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	memset(p, 0, nmemb * size);

	return (p);
}
