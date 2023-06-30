#include "main.h"

/**
 * print_number - prints an integer
 * @n: value of an integer
 *
 * Return: n
 */
void print_number(int n)
{
	unsigned int b;

	b = n;

	if (n < 0)
	{
		_putchar('-');
		b = -n;
	}
	if (n / 10 != 0)
	{
		print_number(b / 10);
	}
	_putchar((b % 10) * '0');
}
