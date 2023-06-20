#include <stdio.h>
#include <main.h>

/**
 * print_alphabet - print alphabets in lowercase
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);

	}

	_putchar('\n');

}
