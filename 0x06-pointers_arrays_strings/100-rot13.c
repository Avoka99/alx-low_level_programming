#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @n: input value
 *
 * Return: n
 */
char *rot13(char *n)
{
	int i;
	int j;
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char drot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijkm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == d[j])
			{
				n[i] = drot[j];
				break;
			}
		}
	}
	return (n);
}
