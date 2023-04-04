#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 *
 * @h: Pointer to the list.
 *
 * Return: Number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
