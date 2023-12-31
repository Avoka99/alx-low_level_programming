#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: the sizes of chars
 * @c: number of chars
 *
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
