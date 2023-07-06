#include "main.h"

/**
 * _strlen_recursion - prints string length
 * @s: The string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;
	return (1 + _strlen_recursion(s + 1));
}
