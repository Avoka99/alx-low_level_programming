#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a line on the terminal
 * @n: the number of times '_' can be printed
 */
void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
