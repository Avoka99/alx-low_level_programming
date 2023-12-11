#include "main.h"

/**
 *  * _memset - Fills the first n bytes of a memory area with a constant byte
 *   * @s: The memory area to fill
 *    * @b: The constant byte
 *     * @n: The number of bytes to fill
 *      *
 *       * Return: The memory area
 *        */
char *_memset(char *s, char b, unsigned int n)
{
	char *original_s = s;
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return original_s;
}

/**
 *  * _memcpy - Copies n bytes from one memory area to another
 *   * @dest: The destination buffer
 *    * @src: The source buffer
 *     * @n: The number of bytes to copy
 *      *
 *       * Return: The destination buffer
 *        */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return original_dest;
}

/**
 *  * _strchr - Locates the first occurrence of a character in a string
 *   * @s: The string to search
 *    * @c: The character to locate
 *     *
 *      * Return: A pointer to the first occurrence of c in s, or NULL if not found
 *       */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
	return NULL;
}

