#include "main.h"

/**
 *  * _strcat - Concatenates two strings
 *   * @dest: The destination buffer
 *    * @src: The source string
 *     *
 *      * Return: The destination buffer
 *       */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

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
 *  * _strncat - Concatenates n characters from two strings
 *   * @dest: The destination buffer
 *    * @src: The source string
 *     * @n: The number of characters to concatenate
 *      *
 *       * Return: The destination buffer
 *        */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';
	return original_dest;
}

/**
 *  * _strncpy - Copies n characters from one string to another
 *   * @dest: The destination buffer
 *    * @src: The source string
 *     * @n: The number of characters to copy
 *      *
 *       * Return: The destination buffer
 *        */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return original_dest;
}

/**
 *  * _strcmp - Compares two strings
 *   * @s1: The first string
 *    * @s2: The second string
 *     *
 *      * Return: 0 if equal, positive if s1 is greater, negative if s2 is greater
 *       */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

