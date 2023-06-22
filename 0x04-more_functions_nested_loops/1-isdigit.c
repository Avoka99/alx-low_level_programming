#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: character to be check
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	for (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
