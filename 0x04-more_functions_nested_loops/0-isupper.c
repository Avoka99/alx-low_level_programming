#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if letter is in uppercase
 * @c: character to be check
 *
 * Return: 1 if c is upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);

	else
		
		return (0);
}
