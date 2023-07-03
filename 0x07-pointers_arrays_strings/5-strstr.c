#include "main.h"

/**
 * _strstr - loctes a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack i = '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j i = '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
