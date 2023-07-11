#include <stdlib.h>
#include "main.h"

/**
 * *cerate_array - creates an array of chars
 * @size: the sizes of chars
 * @c: number of chars
 *
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);

	char *array = malloc(size * sizeof(char));
	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return(array);
}
