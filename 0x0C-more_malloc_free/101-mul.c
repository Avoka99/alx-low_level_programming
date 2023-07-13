#include<stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * mul - multiply two numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: results
*/
int mul(int num1, int num2)
{
	return num1 * num2;
}

/**
 * main - ...
 * @argc: an argument
 * @argv: argument pointer
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int results;

	if (argc != 3)
	{
		_putchar('Error\n');
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 <= 0 || num2 <= 0)
	{
		_putchar('Error\n');
		return (98);
	}

	result = multiply(num1, num2);
	_putchar('%d\n', result);

	return (0);
}
