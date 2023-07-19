#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: Is a name
 * @f: Is a function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
