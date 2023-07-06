#include "main.h"

/**
 * factorial - prints the factorial of given number
 * @n: the value of the given number
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return(1);
	else
		return (n * factorial(n - 1));
}
