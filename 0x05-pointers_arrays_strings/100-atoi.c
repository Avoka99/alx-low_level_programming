#include "main.h"
#include <ctype.h>

/**
 * _atoi - converts strings to integer
 * @s: string value
 *
 * Return: The converted value
 */
int _atoi(char *s)
{
	int r = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			i++;
			continue;
		}
		if (s[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (s[i] == '+')
		{
			i++;
		}

		while (isdigit(s[i]))
		{	
			r = r * 10 + (s[i] - '0');
			i++;
		
		}
		
		r *= sign;

		break;
	}
	return (r);
}
