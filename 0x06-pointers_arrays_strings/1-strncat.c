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
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len++] = src[i];
	}
	dest[len] = '\n';
	return (dest);
}
