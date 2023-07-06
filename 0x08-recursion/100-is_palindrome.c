#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if string is parlindrome
 * @s: the string
 *
 * Return: 1 or 0 if its not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns string length
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the character recursively for parlindrome
 * @s: string
 * @i: iterator
 * @len: length of string
 *
 * Return: 1 or 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (s[i] != s[len - i - 1])
		return (0);
	if (i >= len / 2)
		return (1);
	return (check_pal(s, i + 1, len));
}
