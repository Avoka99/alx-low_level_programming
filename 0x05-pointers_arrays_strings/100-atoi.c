#include "main.h"

/**
 * atoi - converts strings to integer
 * @s: string value
 *
 * Return: The converted value
 */
int _atoi(char *s)
{
	int r = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
	r *= sign;
	return (r);
}
