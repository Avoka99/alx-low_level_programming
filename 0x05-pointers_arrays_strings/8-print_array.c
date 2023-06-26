#include <stdio.h>
#include "main.h"

/**
 * print_array - prints arrays in n numbers
 * @n: the number of array
 * @a: the input array
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
	{
		printf("Invalid input\n");
		return;
	}

	for (i = 0; i < n; i++)
	{

		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
