#include "main.h"

/**
 * *_strncat - concatenate two strings
 * @src: does not need to be null-terminated if it contains n or more bytes
 * @dest: second string
 * @n: value to be contain in src
 *
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
