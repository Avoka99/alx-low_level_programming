#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the square root of an integer
 * @n: the value of the integer
 *
 * Return: actual square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - returns the actual square root
 * @n: integer
 * @i: iterator
 *
 * Return: actual square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i < n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursio(n, i + 1));
}
