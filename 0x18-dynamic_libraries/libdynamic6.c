#include "main.h"

/**
 *  * _strpbrk - Searches a string for any of a set of bytes
 *   * @s: The string to search
 *    * @accept: The set of bytes to search for
 *     *
 *      * Return: A pointer to the byte in s that matches one of the bytes in accept, or NULL if not found
 *       */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
		{
			return s;
		}
		s++;
	}
	return NULL;
}

/**
 *  * _strstr - Locates a substring
 *   * @haystack: The string to search
 *    * @needle: The substring to locate
 *     *
 *      * Return: A pointer to the beginning of the located substring, or NULL if not found
 *       */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return haystack;
		}
		haystack++;
	}
	return NULL;
}

