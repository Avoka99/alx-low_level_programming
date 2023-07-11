#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string
 *
 * Return: returns a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	strcpy(dup, str);
		return (dup);
}
