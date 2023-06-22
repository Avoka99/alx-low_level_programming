#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		_putchar((10 * i) + '0');
		_putchar(' ');
	}
	_putchar('\n');
}
