#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Pointer to the pointer of the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1); /* List is empty or head is NULL */

	current = *head;

	if (index == 0)
	{
		/* Delete the first node */
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			/* Delete the node at the given index */
			temp = current->prev;
			temp->next = current->next;

			if (current->next != NULL)
				current->next->prev = temp;

			free(current);
			return (1);
		}

		current = current->next;
		count++;
	}

	return (-1); /* Index is not valid */
}
