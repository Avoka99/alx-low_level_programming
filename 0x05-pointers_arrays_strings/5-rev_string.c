#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses string
 * @s: value of string
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int start = 0;
	int end = len - 1;
	char temp;

	if (s == NULL)
		return;

	while (s[len] != '\0')
		len++;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
