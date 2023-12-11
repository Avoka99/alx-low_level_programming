#include "main.h"

/**
 *  * _putchar - Writes a character to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1, on error -1
 *      */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 *  * _islower - Checks if a character is lowercase
 *   * @c: The character to check
 *    *
 *     * Return: 1 if lowercase, 0 otherwise
 *      */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 *  * _isalpha - Checks if a character is alphabetic
 *   * @c: The character to check
 *    *
 *     * Return: 1 if alphabetic, 0 otherwise
 *      */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 *  * _abs - Computes the absolute value of an integer
 *   * @n: The integer to compute the absolute value of
 *    *
 *     * Return: The absolute value of n
 *      */
int _abs(int n)
{
	return (n < 0 ? -n : n);
}

/**
 *  * _isupper - Checks if a character is uppercase
 *   * @c: The character to check
 *    *
 *     * Return: 1 if uppercase, 0 otherwise
 *      */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

