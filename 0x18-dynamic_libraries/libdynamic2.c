#include "main.h"

/**
 *  * _isdigit - Checks if a character is a digit
 *   * @c: The character to check
 *    *
 *     * Return: 1 if a digit, 0 otherwise
 *      */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 *  * _strlen - Computes the length of a string
 *   * @s: The string to compute the length of
 *    *
 *     * Return: The length of the string
 *      */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}

/**
 *  * _puts - Writes a string to stdout followed by a newline
 *   * @s: The string to write
 *    */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

/**
 *  * _strcpy - Copies a string
 *   * @dest: The destination buffer
 *    * @src: The source string
 *     *
 *      * Return: The destination buffer
 *       */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return original_dest;
}

/**
 *  * _atoi - Converts a string to an integer
 *   * @s: The string to convert
 *    *
 *     * Return: The converted integer
 *      */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
	{
		s++;
	}

	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return sign * result;
}

