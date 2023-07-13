#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size < old_size)
	{
		memcpy(p, ptr,  new_size);
	}
	else
	{
		memcpy(p, ptr, old_size);
	}
	free(ptr);
	return (p);
}	
