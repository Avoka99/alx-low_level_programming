#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
 * @str: the string
 *
 * Return: returns a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	size_t len = strlen(str);
	char *dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	strcpy (dup, str)
		return (dup);
}
