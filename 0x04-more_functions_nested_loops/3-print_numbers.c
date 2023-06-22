#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 */
void print_numbers(void)
{
	int num;
	char digit[] = "0123456789";

	for (num = 0; num <= 9; num++)
	{

		_putchar(digit[num]);

	}
	_putchar('\n');

}
