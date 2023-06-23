#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else
	{
		i = n;
	}

	if (n / 10)

		print_number(n / 10);

	_putchar(n % 10 + '0');
}
