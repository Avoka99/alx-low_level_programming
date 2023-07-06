#include "main.h"

int is_prime(int n, int div);
/**
 * is_prime_number - returns a prime integer
 * @n: the integer
 *
 * Return: 1 if prime, 0 if composite
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}

/**
 * is_prime - recursively chechks if num is prime
 * @n: num
 * @div: iterator
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime(int n, int div)
{
	if (div == 1)
		return (1);
	if (n % div == 0 && div > 0)
		return (0);
	return (is_prime(n, div - 1));
}
