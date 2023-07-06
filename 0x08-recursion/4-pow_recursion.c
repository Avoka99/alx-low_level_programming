#include "main.h"

/**
 * _pow_recursion - returns the power of an integer
 * @x: an integer
 * @y: an integer power
 *
 * Return: the power of an integer or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
