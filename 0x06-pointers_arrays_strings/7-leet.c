#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @b: input value
 *
 * Return: b
 */
char *leet(char *b)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; b[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (b[i] == s1[j])
			{
				b[i] = s2[j];
			}
		}
	}
	return (b);
}
