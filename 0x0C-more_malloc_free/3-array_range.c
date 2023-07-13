#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min:minimum value
 * @max:maximum value
 *
 * Return: Array to the newly created array
 */
int *array_range(int min, int max)
{
	int *ar;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ar = malloc(size * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = min++;
	return (ar);
}
