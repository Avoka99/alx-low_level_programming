#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return(dest);
}

