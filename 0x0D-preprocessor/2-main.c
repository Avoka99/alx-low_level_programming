#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *f_name = __FILE__;
	int i = 0;

	while (f_name[i] != '\0')
	{
		_putchar(f_name[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
