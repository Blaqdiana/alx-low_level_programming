#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: Pointer the head.
 *
 * @index: Index of the node.
 *
 * Return: head node data or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *tmp;

	tmp = head;
	while (counter != index && tmp != NULL)
	{
		counter++;
		tmp = tmp->next;
	}

	if (counter != index)
		return (NULL);
	return (tmp);
}
