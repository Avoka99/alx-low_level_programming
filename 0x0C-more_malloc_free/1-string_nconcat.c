#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2:string two
 * @n: number of bytes
 *
 * Return: pointer or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	conc = malloc(sizeof(char) * (len1 + n + 1));
	if (conc == NULL)
		return (NULL);

	strncpy(conc, s1, len1);
	strncpy(conc + len1, s2, n);
	conc[len1 + n] = '\0';

	return (conc);
}
