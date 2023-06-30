#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: a pointer
 * @size: is the size of the buffer
 *
 * Return: Always 0
 */
void print_buffer(char *b, int size)
{
	int q, i;

	q = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (q < size)
	{
		printf("%08x: ", q);
		for (i = 0; i < 10; i++)
		{
			if (i < size - q)
				printf("%02x", *(b + q + i));
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < 10; i++)
		{
			if (i < size - q)
			{
				int c = *(b + q + i);

				if (c < 32 || c > 126)
				{
					c = '.';
				}
				printf("%c", c);
			}
		}
		printf("\n");
		q += 10;
	}
}
