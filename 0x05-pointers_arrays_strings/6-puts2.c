#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: The value of the string
 */
void puts2(char *str)
{
	int i = 0;

	if (str == 0)
		return;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
