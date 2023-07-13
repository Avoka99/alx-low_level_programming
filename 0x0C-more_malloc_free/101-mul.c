#include <stdlib.h>
#include "main.h"

/**
 * is_digit - checks if a string is a valid positive number
 * @str: string to check
 * 
 * Return: 1 if valid positive number, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return 0;
		str++;
	}
	return 1;
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 * 
 * Return: product of the two numbers
 */
int multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k;
	int *result;
	int carry, n1, n2, sum;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
		return -1;

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		k = len2 + i;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = (n1 * n2) + carry + result[k];
			result[k] = sum % 10;
			carry = sum / 10;
			k--;
		}
		if (carry > 0)
			result[k] += carry;
	}

	k = 0;
	while (k < len1 + len2 && result[k] == 0)
		k++;

	if (k == len1 + len2)
		_putchar('0');
	else
	{
		for (i = k; i < len1 + len2; i++)
			_putchar(result[i] + '0');
	}
	_putchar('\n');

	free(result);

	return 0;
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * 
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar(':');
		_putchar(' ');
		_putchar('I');
		_putchar('n');
		_putchar('v');
		_putchar('a');
		_putchar('l');
		_putchar('i');
		_putchar('d');
		_putchar(' ');
		_putchar('a');
		_putchar('r');
		_putchar('g');
		_putchar('u');
		_putchar('m');
		_putchar('e');
		_putchar('n');
		_putchar('t');
		_putchar('s');
		_putchar('\n');
		return 98;
	}

	multiply(argv[1], argv[2]);

	return 0;
}

