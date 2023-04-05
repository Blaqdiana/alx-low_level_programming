#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a safe linked listint with a loop.
 *
 * @head: Pointer to head.
 *
 * Return: 
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *next, *tmp = head;
    size_t count = 0;

    while (tmp != NULL)
    {
        printf("[%p] %d\n", (void *)tmp, tmp->n);
        count++;

        next = tmp->next;
        if (next >= tmp)
        {
            printf("-> [%p] %d\n", (void *)next, next->n);
            exit(98);
        }

        tmp = next;
    }

    return count;
}
