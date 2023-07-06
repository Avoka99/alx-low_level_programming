#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string
 *
 * Return: s
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_put_recursion(s + 1);
}
