#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Aways 0
 */
int main(int argc, char *argv[])
{
	int n, j, r;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	r = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && n >= 0; j++)
	{
		while (n >= c[j])
		{
			r++;
			n -= c[j];
		}
	}
	printf("%d\n", r);
	return (0);
}
