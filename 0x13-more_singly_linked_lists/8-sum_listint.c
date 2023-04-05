#include "lists.h"

/**
 * sum_listint - Returns the sum of all data (n) of a listint list.
 *
 * @head: Pointer the head
 *
 * Return: Sum of all nodes or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	node = head;

	while (tmp != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
