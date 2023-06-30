#include "main,h"

/**
 * print_buffer - prints a buffer
 * @b: a pointer
 * @size: is the size of the buffer
 *
 * Return: Always 0
 */
void print_buffer(char *b, int size)
{
	int q,j,i;

	q = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (q < size)
	{
		j = size - q < 10 ? size - q : 10;
		printf("%08x: ", q);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + q + i));
			else 
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + q + i);
			if (c < 32 || c > 132)
			{
				c = '.';
			}
			prinf("%c", c);
		}
		printf("\n");
		q += 10;
	}
}
