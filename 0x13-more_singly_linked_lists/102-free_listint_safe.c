#include "lists.h"
#include <stddef.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t size = 0;

	while (current)
	{
		listint_t *next = current->next;
		free(current);
		size++;
		current = next;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return size;
}

