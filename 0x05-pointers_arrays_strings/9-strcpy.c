#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies string
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	dest = '\0';

	return (ptr);
}
