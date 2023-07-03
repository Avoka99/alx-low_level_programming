#include "main.h"

/**
 * _memset - fill memory with constant bytes
 * @s: Is the pointer
 * @b: Is the constant byte
 * @n: Number of bytes
 *
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
