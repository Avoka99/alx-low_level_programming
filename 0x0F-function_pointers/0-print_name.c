#include <stdio.h>
#include <ctype.h>
#include "main.h"

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

/**
 * print_uppercase - prints name in uppercase letters
 * @name: Name pointer
 *
 * Return: void
 */
void print_uppercase(char *name)
{
	size_t i;

	if (name != NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
		{
			_putchar(toupper(name[i]));
		}
	}
}
/**
 * print_lowercase - prints name in lowercase letters
 * @name: Name pointer
 *
 * Return: void
 */
void print_lowercase(char *name)
{
	size_t i;

	if (name != NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
		{
			_putchar(tolower(name[i]));
		}
	}
}
