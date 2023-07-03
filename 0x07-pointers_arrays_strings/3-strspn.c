#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: number of bytes
 * @accept: stores bytes
 *
 * Return: number of bytes in the initial segments
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
