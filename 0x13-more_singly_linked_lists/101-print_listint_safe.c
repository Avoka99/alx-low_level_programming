#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list (safely).
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head;
    size_t count = 0;
    const listint_t *visited[1024]; // Max size of the set

    while (current)
    {
        size_t i;

        /* Check for loop */
        for (i = 0; i < count; i++)
        {
            if (current == visited[i])
            {
                exit(98);
            }
        }

        visited[count++] = current;
        current = current->next;
    }

    return (count);
}

