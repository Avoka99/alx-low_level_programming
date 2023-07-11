#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	char *conc = malloc((len1 + len2 + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	strcpy(conc, s1);
	strcat(conc, s2);

	return (conc);
}
