#include "main.h"

/**
 * is_prime_number - returns a prime integer
 * @n: the integer
 *
 * Return: 1 if prime, 0 if composite
 */
int is_prime_number(int n)
{
	if (n % 2 == 1)
		return (1);
	else if (n % 3 == 0)
		return (0);
	else
		return (0);
	return (is_prime_number(n, n - 1));
}
