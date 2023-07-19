#include <stddef.h>

/**
 * array_iterator - Iterates through an array
 * @array: pointer to an array
 * @size: size of an array
 * @action: pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
