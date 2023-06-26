#include <stdio.h>
#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: The input string
 *
 * Return: The length the string
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return(0);

	while (s[len] != '\n')
	{
		len++;
	}
	return (len);
}
