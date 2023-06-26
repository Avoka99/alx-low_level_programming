#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: value of string
 */
void puts_half(char *str)
{
	int l = strlen(str);
	int st;

	if (str == NULL)
		return;

	if (l % 2 == 0)
		st = l / 2;
	else
		st = (l-1) / 2 + 1;
	while (str[st] != '\0')
	{
		_putchar(str[st]);
		st++;
	}
	_putchar('\n');
}
