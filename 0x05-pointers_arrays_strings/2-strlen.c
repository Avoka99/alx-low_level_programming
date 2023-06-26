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
	int len;

	while (s[len] != '\n')
	{
		len++;
	}
	return (len);
}
