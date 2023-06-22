#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a line on the terminer
 * @n: the number of times '_' can be printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
