#include <stdio.h>
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
	int i;

	if (name != NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
		{
			_putchar(toupper(name[i]));
			_putchar('\n');
		}
	}
}
/**
 * print_lowercase - prints name in uppercase letters
 * @name: Name pointer
 *
 * Return: void
 */
void print_uppercase(char *name)
{
        int i;

        if (name != NULL)
        {
                for (i = 0; name[i] != '\0'; i++)
                {
                        _putchar(toupper(name[i]));
                        _putchar('\n');
                }
        }
}
