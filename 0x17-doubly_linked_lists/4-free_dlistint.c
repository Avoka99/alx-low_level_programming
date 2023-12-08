#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;  /* Save the next node before freeing */
		free(current);              /* Free the current node */
		current = next_node;        /* Move to the next node */
	}
}

